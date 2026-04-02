#include <bits/stdc++.h>

using namespace std;

class Perhitungan{
    protected:
        int jumlahanak,jumlahtai;

    public:
        int HitungAnak(int a, int b){
            jumlahanak = a;
            jumlahtai = b;
            int jumlahat = jumlahanak + jumlahtai;
            return jumlahat;
        }
};

class PengolahanTai : public Perhitungan{
    private:
        int jumlah;
    public:
        void Cobahitung(int a, int b){
            jumlah = HitungAnak(a,b);
            cout << "hasil Penjumlahan" << jumlah << endl;
        }

};

class TaiKuadrat : public Perhitungan{
    private:
        int jumlah;
    public :
        int hitungKuadrat(int a, int b){
            jumlah = HitungAnak(a,b);
            int baru = jumlah*jumlah;
            return baru;
        }

};

int main(){
    PengolahanTai Ya;
    TaiKuadrat Ye;
    int a,b;
    cin >> a >> b;
    Ya.Cobahitung(a,b);
    int y = Ye.hitungKuadrat(a,b);
    cout << "kuadrat jumlah" << y << endl;
}

