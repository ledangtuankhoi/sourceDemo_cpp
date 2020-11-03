#include <iostream>
using namespace std;
#include <math.h>
/*
Bài 1. Cột bò (100 điểm)
Trên khu đất rộng nhà Hoàng có 𝑛 đống rơm,
đó là thức ăn dự trữ cho chú bò vào mùa đông.
Mỗi đống rơm được biểu diễn là một hình tròn
trên mặt phẳng tọa độ, đống rơm thứ 𝑖 có tọa
độ tâm là (𝑥𝑖, 𝑦𝑖) và bán kính 𝑟𝑖. Tại điểm
(𝑎, 𝑏) có một cọc để cột chú bò. Vào mỗi buổi
chiều tối hàng ngày, Hoàng cột chú bò của
mình vào cọc bằng một sợi dây. Nếu sợi dây có
độ dài 𝑙 thì chú bò có thể di chuyển trong vòng
tròn tâm (𝑎, 𝑏) và bán kính 𝑙.
Yêu cầu: Hãy tìm độ dài 𝑙 nguyên lớn nhất sao cho chú bò không thể ăn rơm từ bất kì một
đống rơm nào. Chú ý rằng, chú bò có thể ăn rơm của đống thứ 𝑖 nếu đường tròn tâm (𝑎, 𝑏) bán
kính 𝑙 và đường tròn tâm (𝑥𝑖, 𝑦𝑖) bán kính 𝑟𝑖 có điểm chung.
Dữ liệu: Vào từ file văn bản cow.inp có định dạng như sau:
 Dòng đầu số chứa ba số nguyên 𝑛, 𝑎, 𝑏 (|𝑎|, |𝑏| ≤ 109);
 Dòng thứ 𝑖 trong 𝑛 dòng tiếp theo chứa ba số nguyên 𝑥𝑖, 𝑦𝑖 và 𝑟𝑖 (|𝑥𝑖|, |𝑦𝑖|, 𝑟𝑖 ≤ 109).
Kết quả: Ghi ra file văn bản cow.out một dòng ghi một số nguyên 𝑙 lớn nhất thỏa mãn.
*/
//bang cuu chuong
void b89_bangcuuchuong_hangdoc()
{
    int n = 9, i = 1;
    for (int j = 2; j <= 9;)
    {
        cout <<endl << j << " * " << i << " = " << j * i   ;
        i++;
        if (i == 9)
        {
            i = 1;
            j ++;
            cout <<endl;
        }
    }
}
void b92_bangcuuchuong_hangngang()
{
    int n = 9, i = 2;
    for (int j = 1; j <= 9;)
    {
        cout << i << " * " << j << " = " << i * j << "\t  "   ;
        i++;
        if (i == 9)
        {
            i = 1;
            j ++;
            cout <<endl;
        }
    }
}

void b93_maACSII()
{
    for (int i = 0; i < 128; i++)
    {
        if(i % 8 ==0)
            cout << endl;
        cout << "\t  " << i << ":  " << (char)i;
    }
}
void b115_USBS()
{
    int n = 56;
    int dem = 0;
    int temp = 0;
    int Tongchan = 0;
    int max = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {    cout << i <<" ";
            dem++;
            temp += i;
            if(i % 2 == 0)  
                Tongchan += i;
            else 
            {
                if (i > max && i != n)
                    max = i;
            }
        }

    }
    cout << "\tdem: " << dem << "\ttong: " << temp << "\ttongchan: " << Tongchan;
    cout << "\tmaxUS: " << max;
}
void b121_somu ()
{
    
}
int main()
{
    // cout << "hello";
    cout <<endl;
    // b89_bangcuuchuong_hangdoc();
    // b92_bangcuuchuong_hangngang();
    // b93_maACSII();
    b115_USBS();
    // system ("pause");
}