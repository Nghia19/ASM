#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ktSoNguyen();
void timUCLNvaBCNN();
void tinhTienKaraoke();
void tinhTienDien();
void doiTien();
void tinhLaiNganHang();
void vayTien();
void sxHS();
void gameLOTT();
void tinhPS();
int main() {
	mainMenu(); 
	return 0;
}

int mainMenu(){
	int menu=-1;
	printf("+++========================================================+++\n");
	printf("|       BAI GIAI DOAN 1 MON COM108 - NHAP MON LAP TRINH      |\n");
	printf("|               Nguoi thuc hien: LE TRUNG NGHIA              |\n");
	printf("|                       MSSV: PS17048                        |\n");
	printf("+++========================================================+++\n\n\n");
	
	printf("---------------------------[ MENU ]---------------------------\n");
	printf("| <1>   KIEM TRA SO NGUYEN                                   |\n");
	printf("| <2>   TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO            |\n");
	printf("| <3>   TINH TIEN CHO QUAN KARAOKE                           |\n");
	printf("| <4>   TINH TIEN DIEN                                       |\n");
	printf("| <5>   DOI TIEN                                             |\n");
	printf("| <6>   TINH LAI XUAT NGAN HANG VAY TRA GOP                  |\n");
	printf("| <7>   VAY TIEN MUA XE                                      |\n");
	printf("| <8>   SAP XEP THONG TIN SINH VIEN                          |\n");
	printf("| <9>   GAME FPOLY-LOTT (2/15)                               |\n");
	printf("| <10>  TINH PHAN SO                                         |\n");
	printf("--------------------------------------------------------------\n");
	printf("| <0>   THOAT KHOI CHUONG TRINH                              |\n");
	printf("--------------------------------------------------------------\n\n");
	do{
	printf("Moi ban chon chuong trinh (0,1,2,...): ");
	scanf("%d",&menu);
	}while(menu<0 || menu>11);
	switch(menu){
		case 0: exit(0);
		case 1:{
			system("cls");
			ktSoNguyen();
			break;
		}
		case 2:{
			system("cls");
			timUCLNvaBCNN();
			break;
		}
		case 3:{
			system("cls");
			tinhTienKaraoke();
			break;
		}
		case 4:{
			system("cls");
			tinhTienDien();
			break;
		}
		case 5:{
			system("cls");
			doiTien();
			break;
		}
		case 6:{
			system("cls");
			tinhLaiNganHang();
			break;
		}
		case 7:{
			system("cls");
			vayTien();
			break;
		}
		case 8:{
			system("cls");
			sxHS();
			break;
		}
		case 9:{
			system("cls");
			gameLOTT();
			break;
		}
		case 10:{
			system("cls");
			tinhPS();
			break;
		}
	}
}
void ktSoNguyen(){
	printf("++-------------------------------------------------------++\n");
	printf("|             Chuong trinh kiem tra so nguyen             |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	float n;
  	printf("Moi ban nhap mot so bat ky: ");
  	scanf("%f",&n);
  	if(n == (int)n){
		printf("%g la so nguyen\n",n);
		// Kiem tra so nguyen to
		if(n < 2){
			printf("%g khong la so nguyen to.\n", n);
		}else{
			int i;
			int mark = 1;
			for(i = 2; i <= sqrt(n); i++)  {
				if((int)n % i == 0) {
					mark = 0;
					break;
				}
			}
			if(mark == 1) {
				printf("%g la so nguyen to.\n", n);
			} else {
				printf("%g khong la so nguyen to.\n", n);
			}
		}
		// Kiem tra so chinh phuong
	 	int temp;
    	temp = sqrt(n);
    	if(temp*temp == n){
    		printf("%g la so chinh phuong.\n", n);
		}else{
			printf("%g khong la so chinh phuong.\n", n);
		}
  	}else{
    	printf("%g khong phai la so nguyen\n%g khong la so nguyen to.\n%g khong la so chinh phuong.\n",n,n,n);
 	}
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			ktSoNguyen();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void timUCLNvaBCNN(){ 
	printf("++-------------------------------------------------------++\n");
	printf("| Chuong trinh tim uoc so chung va boi so chung cua 2 so  |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	printf("Chuong trinh dang hoan thien, ban vui long quay lai sau");
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			timUCLNvaBCNN();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void tinhTienKaraoke(){
	printf("++-------------------------------------------------------++\n");
	printf("|             Chuong trinh tinh tien Karaoke              |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int start,end;
	printf("!!!!! Quan Karaoke hoat dong tu 12h den 23h !!!!!\n");
	
	do{
		fflush(stdin);
		printf("Nhap vao gio bat dau: ");
	}while(scanf("%d",&start)!=1 || start<12 || start>23);
	
	do{
		
		if(end < start){
			printf("\n!!!!! THOI GIAN KET THUC KHONG THE NHO HON THOI GIAN BAT DAU !!!!!\n");
		}
		if(end > 23){
				printf("\n!!!!! THOI GIAN KET THUC < 24 !!!!!\n");
		}
		fflush(stdin);
		printf("Nhap vao gio ket thuc: ");
	}while(scanf("%d",&end)!=1 || end<12 || end>23 || end<start);
	
	int thoiGian = end - start, tien;
	if(thoiGian <=3){
		tien = thoiGian * 150000;
	}
	else if(thoiGian > 3){
		tien = ((thoiGian - 3) * 150000 * 0.7) + 450000; 
	}
	if(start >= 14 && start<=17){
		tien = tien * 0.9;
	}
	printf("So tien can thanh toan la: %d VND", tien);
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhTienKaraoke();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void tinhTienDien(){
	printf("++-------------------------------------------------------++\n");
	printf("|               Chuong trinh tinh tien dien               |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int dien,tien;
	do{
		printf("Nhap vao so (kwh) dien da su dung: ");
	}while(scanf("%d",&dien)!=1 || dien<0);

	if(dien <= 50){
		tien = dien * 1678;
	}
	else if(dien <= 100){
		tien = 83900 + ((dien-50)*1734);
	}
	else if(dien <= 200){
		tien = 83900 + 86700 + ((dien-100) * 2014);
	}
	else if(dien <= 300){
		tien = 83900 + 86700 + 201400 + ((dien-200) * 2536);
	}
	else if(dien <= 400){
		tien = 83900 + 86700 + 201400 + 253600 + ((dien-300) * 2834);
	}
	else if(dien > 400){
		tien = 83900 + 86700 + 201400 + 253600 + 283400 + ((dien-400) * 2927);
	}
	printf("Tien dien ban phai tra la: %d VND", tien);
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhTienDien();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void doiTien(){
	printf("++-------------------------------------------------------++\n");
	printf("|                  Chuong trinh doi tien                  |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int cacMenhGia[9] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
	unsigned int tien=0;
	printf("!!!!! So tien phai chia het cho 1.000 va lon hon 1.000!!!!!\n");
	do{
		printf("Nhap vao so tien ban can doi: ");
	}while(scanf("%d",&tien)!=1 || tien <= 1000 );
	unsigned int du = tien;
	int i;
	int heSo;
	for(i = 0 ; i < 9; i++){
		heSo = du/cacMenhGia[i];
		if(tien == cacMenhGia[i] || heSo < 1 ){
			continue;
		}
		printf("%d x %d\n",heSo,cacMenhGia[i]);
		du = du%cacMenhGia[i];
		if(du < 1000){
			break;
		}
	};
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			doiTien();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void tinhLaiNganHang(){
	printf("++-------------------------------------------------------++\n");
	printf("|    Chuong trinh tinh lai xuat ngan hang vay tra gop     |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	double tienCanvay;
	float laiXuat = 0.05;
	int kyHan = 12;
	do{
		printf("Nhap vao so tien ban muon vay: ");
	}while(scanf("%lf",&tienCanvay)!=1 || tienCanvay <0);
	double tienGocHangThang = tienCanvay/kyHan;
	double tienLaiHangThang;
	double tongTienPhaiTra;
	printf("Ky han | Lai phai tra | Goc phai tra | Tien phai tra | Tien con lai\n\n");
	int i;
	for(i = 1; i <= kyHan; i++){
		tienLaiHangThang = tienCanvay*laiXuat;
		tienCanvay -= tienGocHangThang;
		printf("%2d     |   %10.0lf |  %10.0lf  |   %10.0lf  |   %10.0lf     \n",i,tienLaiHangThang,tienGocHangThang,tienGocHangThang + tienLaiHangThang,tienCanvay);
		tongTienPhaiTra += tienGocHangThang + tienLaiHangThang;
	}
	printf("\nTong so tien phai tra la: %.0lf",tongTienPhaiTra);
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhLaiNganHang();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void vayTien(){
	printf("++-------------------------------------------------------++\n");
	printf("|         Chuong trinh tinh lai xuat vay mua xe           |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	double tienGoc = 500000000;
	double phanTramvay;
	double LaiXuatNam = 0.072;
	int kyHan = 288,i;
	do{
		printf("Phan tram muon vay: ");
	}while(scanf("%lf",&phanTramvay)!=1 || phanTramvay<0 || phanTramvay>80);
	double tienCanvay = tienGoc*(phanTramvay/100.0);
	printf("\nSo tien vay la: %.0lf\n",   tienCanvay);
	double TienGocHangThang = tienCanvay/kyHan;
	double tienLaiHangThang;
	double tongTienPhaiTra;
	printf("Ky han | Lai phai tra | Goc phai tra | Tien phai tra | Tien con lai\n");
	for(i = 1; i <= kyHan; i++){
		tienLaiHangThang = tienCanvay * (LaiXuatNam/12.0);
		tienCanvay -= TienGocHangThang;
		printf("%3d    |   %10.0lf |  %10.0lf  |   %10.0lf  |   %10.0lf     \n",i,tienLaiHangThang,TienGocHangThang,TienGocHangThang + tienLaiHangThang,tienCanvay);
		tongTienPhaiTra += TienGocHangThang + tienLaiHangThang;
	}
	printf("\nTong so tien phai tra la: %.0lf", tongTienPhaiTra);
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			vayTien();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void sxHS(){
	printf("++-------------------------------------------------------++\n");
	printf("|        Chuong trinh sap xep thong tin sinh vien         |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	printf("Chuong trinh dang hoan thien, ban vui long quay lai sau");
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			sxHS();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void gameLOTT(){
	printf("++-------------------------------------------------------++\n");
	printf("|                  GAME FPOLY-LOTT (2/15)                 |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	printf("Chuong trinh dang hoan thien, ban vui long quay lai sau");
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			gameLOTT();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void tinhPS(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|         Chuong trinh tinh lai xuat vay mua xe           |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	printf("Chuong trinh dang hoan thien, ban vui long quay lai sau");
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhPS();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}

