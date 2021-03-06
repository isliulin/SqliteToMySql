/*******************************************************************************
 * Copyright [2017]   <青岛艾普智能仪器有限公司>
 * All rights reserved.
 *
 * version:     0.1
 * author:      zhaonanlin
 * brief:       雪花算法
*******************************************************************************/
#ifndef SNOWFLAKE_H
#define SNOWFLAKE_H

#include <qmath.h>
#include <QDebug>
#include <QDateTime>

class LQSnowflake {
public:
    LQSnowflake();
public slots:
    quint64 getId();
    void setMachineId(quint64 id);
    void setDataCenterId(quint64 id);
private slots:
    quint64 getTimestamp();
    quint64 getNextTimestamp(quint64 lastTimestamp);

private:
    quint64 sequence;
    quint64 sequenceMask;
    quint64 sequenceBits;

    quint64 machineId;
    quint64 machineMask;
    quint64 machineBits;
    quint64 machineIdShift;

    quint64 datacenterId;
    quint64 datacenterMask;
    quint64 datacenterBits;
    quint64 datacenterIdShift;

    quint64 lastTimestamp;
    quint64 timestampShift;
};

#endif // SNOWFLAKE_H
