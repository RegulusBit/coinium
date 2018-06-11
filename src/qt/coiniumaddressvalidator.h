// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINIUM_QT_COINIUMADDRESSVALIDATOR_H
#define COINIUM_QT_COINIUMADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CoiniumAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CoiniumAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Coinium address widget validator, checks for a valid coinium address.
 */
class CoiniumAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CoiniumAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // COINIUM_QT_COINIUMADDRESSVALIDATOR_H
