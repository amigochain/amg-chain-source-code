// Copyright (c) 2017 The Amigo Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_WALLET_TEST_FIXTURE_H
#define BITCOIN_WALLET_TEST_FIXTURE_H

#include <test/test_bitcoin.h>

#include <wallet/hdwallet.h>

/** Testing setup and teardown for wallet.
 */
struct HDWalletTestingSetup: public TestingSetup {
    HDWalletTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~HDWalletTestingSetup();

    std::unique_ptr<CHDWallet> pwalletMain;
};

std::string StripQuotes(std::string s);

#endif

