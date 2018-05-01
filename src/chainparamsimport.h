#ifndef BITCOIN_CHAINPARAMSIMPORT_H
#define BITCOIN_CHAINPARAMSIMPORT_H


void AddImportHashesMain(std::vector<CImportedCoinbaseTxn> &vImportedCoinbaseTxns)
{
    vImportedCoinbaseTxns.push_back(CImportedCoinbaseTxn(1,  uint256S("7302332ff1d2459c2f5b7893e1701c26769d486a8ab2323b893dae112f698c07")));

};

void AddImportHashesTest(std::vector<CImportedCoinbaseTxn> &vImportedCoinbaseTxns)
{
  vImportedCoinbaseTxns.push_back(CImportedCoinbaseTxn(1,  uint256S("9d710f8fe54ba1dd6cfd3563ea4547592b7a008a10f23cd04e64406c68fc5e9f")));
};


#endif // BITCOIN_CHAINPARAMSIMPORT_H
