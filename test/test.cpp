#include "mser.h"
#include "headline.h"

int main(int argc, char * argv[]){
	//Mat img = imread(argv[1], 1); //ͨ������������Ե���
	Mat img = imread("D:\\Users\\Administrator\\Desktop\\����ͼƬ\\09.jpg");
	//Mat img = imread("..//a1.jpg");
	if (!img.data){
		cout << "File not found" << endl;
		return -1;
	}
	Mser fun;
	Mat binaryNumber = fun.detectNumber(img);
	//showWindowImg("binary number",binaryNumber);
	if (!!binaryNumber.data){
		cout << binaryNumber.cols << endl;
		cout << binaryNumber.rows << endl;
	
		cout << "ִ�гɹ�" << endl;
	}
	else
		cout << "ִ��ʧ��" << endl;
	waitKey(0);
	return 0;
}