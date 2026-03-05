#include <bits/stdc++.h>

using namespace std;

class Perhitungan{
private:
    int Tabungan = 100000;
public:
    int Hutang = 0;
    void hitungTabungan(int minjem){
        if(minjem > 0){
            Hutang = minjem;
            Tabungan += Hutang;
        }
        else{
            Hutang = minjem;
            Tabungan -= Hutang;
        }

    }
    auto CetakUang(){
        int jumlah = Tabungan;
        return jumlah;
    }

};

int main(){
    Perhitungan pr;
    int a;
    cin >> a;
    pr.hitungTabungan(a);
    cout << pr.CetakUang();
}