
#include <iostream>
using namespace std;

class MonHoc
{
    string maMon, tenMon;

public:
    void setMaMon(string x) { maMon = x; }
    string getMaMon() { return maMon; }
    void setTenMon(string x) { tenMon = x; }
    string getTenMon() { return tenMon; }
};
class SinhVien
{
    string maSV;
    string tenSV;

public:
    void setMaSV(string x) { maSV = x; }
    string getMaSV() { return maSV; }
    void setTenSV(string x) { tenSV = x; }
};

class SinhVienMonHoc : public SinhVien, public MonHoc
{
    int diemQT;
    int diemCuoiKy;

public:
    void setDiemQT(int x) { diemQT = x; }
    int getDiemQT() { return diemQT; }
    void setDiemCuoiKy(int x) { diemCuoiKy = x; }
    int getDiemCuoiKy() { return diemCuoiKy; }
    //
    int getDiemTongKet()
    {
        return (diemQT * 40 + diemCuoiKy * 60) / 100;
    }
};
//-------------------------------
int main()
{
    SinhVienMonHoc sv;
    //-- Phuong thuc thuoc lop Sinh Vien
    sv.setMaSV("A02103");
    sv.setTenSV("Nguyen Van A");
    //-- Phuong thuc thuoc lop Mon hoc
    sv.setMaMon("CS232");
    sv.setTenMon("LTHDT");
    //-- Phuong thuc thuoc lop Sinh Vien, Mon hoc
    sv.setDiemQT(10);
    sv.setDiemCuoiKy(10);
    //--
    cout << "Diem QT: " << sv.getDiemQT() << ", cuoi ky: ";
    cout << sv.getDiemCuoiKy() << ". Tong ket = " << sv.getDiemTongKet();

    return 0;
};