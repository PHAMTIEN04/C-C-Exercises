#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int goto1()
{
	cau1:
		cout << "Cau 1 : May tinh dien tu la gi"<< endl;
		cout <<"A. Thiet bi luu tru thong tin\nB. Thiet bi so hoa va bien doi thong tin\nC. Thiet bi luu tru va xu ly thong tin\nD. Thiet bi tao va bien doi thong tin"<<endl;
		char cau1;
		cout << "Chon: "; cin >> cau1;
		if (cau1 == 'C' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
		
	
	goto cau1;
}
int goto2(){

	cau2:
		cout << "Cau 2. May tinh dau tien ENIAC su dung linh kien nao trong so cac linh kien sau?"<< endl;
		cout <<"A. Transistor luong cuc\nB. Transistor truong\nC. Den dien\nD. IC ban dan"<<endl;
		char cau2;
		cout << "Chon: "; cin >> cau2;
		if (cau2 == 'C' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau2;
}
int goto3(){

	cau3:
		cout << "Cau 3. Trong cac phat bieu sau, phat bieu nao dung?"<< endl;
		cout <<"A. Phan cung cua may tinh bao gom cac doi tuong vat ly nhu: ban mach chinh, bo nho RAM, ROM, dia cung, man hinh\nB. Phan cung cua may tinh bao gom cac doi tuong nhu: ban mach chinh, bo nho RAM, bo nho ROM, dia cung, man hinh va chuong trinh duoc cai dat trong ROM \nC. Phan cung cua may tinh la chuong trinh duoc cai dat trong bo nhoROM\nD. Phan cung cua may tinh chinh la bo xu ly trung tam"<<endl;
		char cau3;
		cout << "Chon: "; cin >> cau3;
		if (cau3 == 'A' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau3;
}
int goto4(){

	cau4:
		cout << "Cau 4. Cac thanh phan co ban cua mot may tinh gom:"<< endl;
		cout <<"A. Bo nho trong, CPU va khoi phoi ghep vao ra\nB. Bo nho trong, CPU va thiet bi ngoai vi\nC. Bo nho trong, CPU, khoi phoi ghep vao ra va thiet bi ngoai vi\nD. Bo nho trong, CPU, bo nho ngoai, bo phoi ghep vao ra va thiet bi ngoai vi"<<endl;
		char cau4;
		cout << "Chon: "; cin >> cau4;
		if (cau4  == 'D' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau4;
}
int goto5(){
	
	cau5:
		cout << "Cau 5. Phan deo (Firmware) trong may tinh la gi?"<< endl;
		cout <<"A. Phan mem duoc dat vao ben trong cac mach dien tu trong qua trinh san xuat\nB. He dieu ha\nC. Cac Driver cho cac thiet bi phan cung va cac mach ho tro phoi ghep vao ra cho may tinh\nD. Phan mem he thong"<<endl;
		char cau5;
		cout << "Chon: "; cin >> cau5;
		if (cau5 == 'A' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau5;
}
int goto6(){

	cau6:
		cout << "Cau 6. Mot vi du ve phan deo (Firmware) trong may tinh la:"<< endl;
		cout <<"A. He dieu hanh MS DOS\nB. Chuong trinh dieu khien trong ROM BIOS\nC. Chuong trinh Driver cho Card man hinh cua may tinh\nD. Phan mem ung dung cua nguoi dung"<<endl;
		char cau6;
		cout << "Chon: "; cin >> cau6;
		if (cau6 == 'B' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau6;
}
int goto7(){

	cau7:
		cout << "Cau 7. Viec trao doi du lieu giua thiet bi ngoai vi va may tinh duoc thuc hien qua:"<< endl;
		cout <<"A. Mot thanh ghi dieu khien\nB. Mot cong\nC. Thanh ghi AX\nD. Thanh ghi co"<<endl;
		char cau7;
		cout << "Chon: "; cin >> cau7;
		if (cau7 == 'B' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau7;
}
int goto8(){

	cau8:
		cout << "Cau 8. Phan mem cua may tinh la:"<< endl;
		cout <<"A. Cac bo dieu phoi thiet bi giup cho viec ghep noi va ra duoc thuc hien mot cach linh hoat.\nB. Co cau trao doi du lieu giua cac thiet bi phan cung trong may tinh\nC. Chuong trinh duoc cai dat trong bo nho ROM\nD. Bo vi xu ly va cac vi mach ho tro cho no"<<endl;
		char cau8;
		cout << "Chon: "; cin >> cau8;
		if (cau8 == 'C' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau8;
}
int goto9(){

	cau9:
		cout << "Cau 9.  Trong cac bo phan sau, bo phan nao khong thuoc bo xu ly trung tam:"<< endl;
		cout <<"A. Don vi phoi ghep vao ra\nB. Khoi so hoc va logic\nC. Tap cac thanh ghi da nang\nD. Khoi dieu khien"<<endl;
		char cau9;
		cout << "Chon: "; cin >> cau9;
		if (cau9 == 'A' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau9;
}
int goto10(){

	cau10:
		cout << "Cau 10.  Trong cac bo phan sau, bo phan nao khong thuoc bo xu ly trung tam:"<< endl;
		cout <<"A. Bo nho trong\nB. Khoi so hoc va logic\nC. Tap cac thanh ghi da nang\nD. Khoi dieu khien de thi hanh lenh mot cach tuan tu va tac dong len cac mach chuc nang nham thi hanh lenh"<<endl;
		char cau10;
		cout << "Chon: "; cin >> cau10;
		if (cau10 == 'A' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau10;
}
int goto11(){

	cau11:
		cout << "Cau 11.  Trong cac bo phan sau, bo phan nao thuoc bo xu ly trung tam:"<< endl;
		cout <<"A. Bo nho trong\nB. Don vi phoi ghep vao ra\nC. Tap cac thanh ghi da nang\nD. Khoi dieu khien Bus he thong"<<endl;
		char cau11;
		cout << "Chon: "; cin >> cau11;
		if (cau11 == 'C' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau11;
}
int goto12()
{
	cau12:
		cout << "Cau 12. Tai sao bo nho trong cua may tinh duoc goi la bo nho truy cap ngau nhien?"<< endl;
		cout <<"A. Gia tri cac o nho la ngau nhien\nB. Thoi gian truy cap vao mot o nho bat ky la nhu nhau\nC. Bo nho gom cac module co thu tu sap xep ngau nhien\nD. Thoi gian truy cap vao mot o nho bat ky la ngau nhien"<<endl;
		char cau12;
		cout << "Chon: "; cin >> cau12;
		if (cau12 == 'B' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
		
	
	goto cau12;
}
int goto13(){

	cau13:
		cout << "Cau 13. Toc do dong ho he thong duoc do bang don vi gi?"<< endl;
		cout <<"A. Bit/s\nB. Baud\nC. Byte\nD. Hz"<<endl;
		char cau13;
		cout << "Chon: "; cin >> cau13;
		if (cau13 == 'D' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau13;
}
int goto14(){

	cau14:
		cout << "Cau 14. Nguoi ta danh gia su phat trien cua may tinh dien tu so qua cac giai doan dua vao tieu chi nao trong cac tieu chi sau day?"<< endl;
		cout <<"A. Toc do tinh toan cua may tinh\nB. Muc do tich hop cua cac vi mach dien tu trong may tinh\nC. Chuc nang cua may tinh\nD. Ca 3 tieu chi tren"<<endl;
		char cau14;
		cout << "Chon: "; cin >> cau14;
		if (cau14 == 'D' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau14;
}
int goto15(){

	cau15:
		cout << "Cau 15. Chon mot phuong an dung trong cac phuong an sau:"<< endl;
		cout <<"A. May Turing gom mot bang ghi (tape) va mot bo xu ly trung tam\nB. May Turing gom mot bo dieu khien trang thai huu han, mot bang ghi,va mot dau doc ghi\nC. May Turing gom mot bo xu ly trung tam va mot co cau luu tru gomcac IC nho\nD. May Turing gom mot dau doc ghi, mot bo xu ly trung tam, va mot bang ghi"<<endl;
		char cau15;
		cout << "Chon: "; cin >> cau15;
		if (cau15== 'B' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau15;
}
int goto16(){

	cau16:
		cout << "Cau 16. Mot trong cac noi dung cua nguyen ly Von Newmann la:"<< endl;
		cout <<"A. May tinh co the hoat dong theo mot chuong trinh da duoc luu tru\nB. May tinh co the dieu khien moi hoat dong bang mot chuong trinh duynhat\nC. Bo nho may tinh khong the dia chi hoa duoc\nD. Moi cau lenh phai co mot vung nho chua dia chi lenh tiep theo"<<endl;
		char cau16;
		cout << "Chon: "; cin >> cau16;
		if (cau16 == 'A' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau16;
}
int goto17(){

	cau17:
		cout << "Cau 17. Trong cac phat bieu sau, phat bieu nao khong thuoc noi dung cua nguyen ly Von Newmann?"<< endl;
		cout <<"A. May tinh co the hoat dong theo mot chuong trinh da duoc luu tru\nB. May tinh su dung mot bo dem chuong trinh de chi ra vi tri cau lenh ke tiep\nC. Bo nho cua may tinh duoc dia chi hoa\nD. Moi cau lenh phai co mot vung nho chua dia chi lenh tiep theo"<<endl;
		char cau17;
		cout << "Chon: "; cin >> cau17;
		if (cau17 == 'D' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau17;
}
int goto18(){

	cau18:
		cout << "Cau 18. Trong cac phat bieu sau, phat bieu nao thuoc noi dung cua nguyen ly Von Newmann?"<< endl;
		cout <<"A. May tinh su dung mot bo dem chuong trinh de chi ra vi tri cau lenh ke tiep\nB. May tinh co the dieu khien moi hoat dong bang mot chuong trinh duy nhat\nC. Bo nho may tinh khong the dia chi hoa duoc\nD. Moi cau lenh phai co mot vung nho chua dia chi lenh tiep theo"<<endl;
		char cau18;
		cout << "Chon: "; cin >> cau18;
		if (cau18 == 'A' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau18;
}
int goto19(){

	cau19:
		cout << "Cau 19. Phat bieu sau day thuoc noi dung cua nguyen ly Von Newmann?"<< endl;
		cout <<"A. Cac chuong trinh chi duoc nap khi thuc hien\nB. May tinh co the dieu khien moi hoat dong bang mot chuong trinh duy nhat\nC. Bo nho may tinh khong the dia chi hoa duoc\nD. Bo nho cua may tinh duoc dia chi hoa"<<endl;
		char cau19;
		cout << "Chon: "; cin >> cau19;
		if (cau19 == 'D' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau19;
}
int goto20(){

	cau20:
		cout << "Cau 20. Theo nguyen ly Von Newmann, de thay doi thu tu cac lenh duoc thuc hien, ta chi can:"<< endl;
		cout <<"A. Thay doi noi dung thanh ghi con tro lenh bang dia chi lenh can thuc hien tiep\nB. Thay doi noi dung trong vung nho chua dia chi chuong trinh dang thuc hien\nC. Thay doi noi dung thanh ghi mang ma lenh\nD. Thay doi noi dung thanh ghi mang du lieu"<<endl;
		char cau20;
		cout << "Chon: "; cin >> cau20;
		if (cau20 == 'A' ){
		cout<< "Dap an chinh xac"<<endl;
		getch();
		system("cls");
		return 0;			
		}
		else{
		cout <<"Dap an chua chinh xac"<<endl;
		}
		getch();
		system("cls");	
	goto cau20;
}
void nhom_1()
{
	goto1(); goto2(); goto3(); goto4(); goto5();goto6(); goto7(); goto8(); goto9(); goto10();goto11(); goto12(); goto13(); goto14(); goto15();
	goto16();goto17(); goto18(); goto19(); goto20();
}
int main(){
	cau1:
	cout << "\n\t\t\t\tCAU HOI TRAC NGHIEM KIEN TRUC MAY TINH"<< endl;
	cout << "Nhom 1:\n- 100 cau hoi\n- Trac nghiem kien thuc ve: To chuc he thong may tinh, ma hoa thong tin, nhung cot moc trong linh vuc may tinh,..."<< endl;
	getch();
	system("cls");
	for (int i = 1 ; i <= 1 ; i++)
	{
		nhom_1();		
	}
	
	
	getch();

	return 0;
}

