#ifndef l_donate_h
#define l_donate_h

protected void create();
protected void init();
int GetAssets();
int AddAssets(int amount);
string GetOwner();
string SetOwner(string owner);
string SetLocalCurrency(string currency);
string GetLocalCurrency();
int eventDonate(int amount, string type);
#endif /* l_donate_h */
