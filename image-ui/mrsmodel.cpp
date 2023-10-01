#include "mrsmodel.h"

MrsModel::MrsModel(QObject *parent)
    : QAbstractTableModel(parent),
      mData()
{
}

QVariant MrsModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    static QStringList headers = {
        "Part Number",
        "Manufacturer",
        "Quantity"
    };

    if(role == Qt::DisplayRole && orientation == Qt::Horizontal && section < headers.count())
        return headers[section];
    else if(role == Qt::DisplayRole && orientation == Qt::Vertical)
        return section + 1;
    else
        return QVariant();

}


int MrsModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;
    return mData.count();
}

int MrsModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return 3;
}

QVariant MrsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if(role == Qt::DisplayRole || role == Qt::EditRole)
    {
        switch(index.column())
        {
        case 0:
            return mData[index.row()].partNumber;
        case 1:
            return mData[index.row()].manufacturer;
        case 2:
            return mData[index.row()].quantity;
        }
    }
    return QVariant();
}

bool MrsModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (data(index, role) != value) {
        if(role == Qt::EditRole)
        {
            switch(index.column())
            {
            case 0:
                mData[index.row()].partNumber = value.toString();
                break;
            case 1:
                mData[index.row()].manufacturer = value.toString();
                break;
            case 2:
                mData[index.row()].quantity = value.toInt();
                break;
            }
        }
        emit dataChanged(index, index, QVector<int>() << role);
        return true;
    }
    return false;
}

Qt::ItemFlags MrsModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    auto flagValues = QAbstractTableModel::flags(index);
    if(index.column() != 0)
        flagValues = flagValues | Qt::ItemIsEditable;
    return flagValues;
}

bool MrsModel::insertRows(int row, int count, const QModelIndex &parent)
{
    beginInsertRows(parent, row, row + count - 1);
    for(int i = 0; i < count; ++i)
    {
        mData.insert(i + row, MrsData());
    }
    endInsertRows();
}

bool MrsModel::removeRows(int row, int count, const QModelIndex &parent)
{
    beginRemoveRows(parent, row, row + count - 1);
    for(int i = 0; i < count; ++i)
    {
        mData.removeAt(row);
    }
    endRemoveRows();
}

