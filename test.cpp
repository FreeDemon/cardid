#include "mser.h"
#include "headline.h"

int main(int argc, char * argv[]){
	//Mat img = imread(argv[1], 1); //ͨ������������Ե���
	Mat img = imread("..//ceshi.png");
	//Mat img = imread("..//3.jpg");
	if (!img.data){
		cout << "File not found" << endl;
		return -1;
	}
	Mser fun;
	Mat binaryNumber = fun.detectNumber(img);
	//showWindowImg("binary number",binaryNumber);
	if (!binaryNumber.data)
		cout << "ִ��ʧ��" << endl;
	else
		cout << "ִ�гɹ�" << endl;
	waitKey(0);
	return 0;
}