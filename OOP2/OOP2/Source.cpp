#include <iostream>

using namespace std;


//Point class yazilsin
//1.x, y fieldleri olsun ve her bir field uchun getter setterler yazilsin,
//constructor parametric, default
//ShowData method yazilsin

//
//class Point {
//private:
//	int x ;
//	int y ;
//public:
//	Point() {
//		 x = 0;
//		 y = 0;
//	}
//	Point(int x1, int y1) {
//		x = x1;
//		y = y1;
//	}
//
//	void setData(int x1, int y1) {
//		x = x1;
//		y = y1;
//	}
//
//	int getX() {
//		return x;
//	}
//
//	int getY() {
//		return y;
//	}
//
//	void Print() {
//		cout << "Showing as following  " << endl;
//		cout << "X = " << x<<endl;
//		cout << "Y = " << y<<endl;
//	}
//
//};
//
//void main() {
//
//	////Point p(25,30);
//	////p.Print();
//	//Point p;
//	//p.setData(2, 3);
//	//p.Print();
//	//Point p;
//	//p.setData(45, 57);
//	//p.Print();
//
//	int x = p.getX();
//	int y = p.getY();
//	cout << "Product = " << x * y << endl;
//
//}


// Task 2:


//class Fraction {
//private:
//	int numerator; // suret
//	int denominator; // mexrec
//public:
//	void init(int num, int don) {
//		numerator = num;
//		denominator = don;
//	}
//
//	Fraction Multiply(const Fraction& other) {
//		int other 
//
//
//
//	}; // Kesri kesre vurub yeni kesr qaytarir
//	Fraction Add(const Fraction& other); // Kesri kesrle toplayib yeni kesr qaytarir
//	Fraction Minus(const Fraction& other); // Kesri kesrden chixib yeni kesr qaytarir
//	Fraction Divide(const Fraction& other); // Kesri kesre bolub yeni kesr qaytarir
//	void Simplify(const Fraction& other); // Kesri ixtisar edir
//};




//class Fraction
//{
//private:
//    int numerator, denominator;
//public:
//    Fraction()
//    {
//        numerator = 1;
//        denominator = 1;
//    }
//    Fraction(int n, int d)
//    {
//        numerator = n;
//        if (d == 0)
//        {
//            cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
//        }
//        else
//            denominator = d;
//    }
//    Fraction Sum(Fraction otherFraction)
//    {
//        int n = numerator * otherFraction.denominator + otherFraction.numerator * denominator;
//        int d = denominator * otherFraction.denominator;
//        return Fraction(n / GreatestCommonDivider(n, d), d / GreatestCommonDivider(n, d));
//    }
//    Fraction Difference(Fraction otherFraction)
//    {
//        int n = numerator * otherFraction.denominator - otherFraction.numerator * denominator;
//        int d = denominator * otherFraction.denominator;
//        return Fraction(n / GreatestCommonDivider(n, d), d / GreatestCommonDivider(n, d));
//    }
//    Fraction Product(Fraction otherFraction)
//    {
//        int n = numerator * otherFraction.numerator;
//        int d = denominator * otherFraction.denominator;
//        return Fraction(n / GreatestCommonDivider(n, d), d / GreatestCommonDivider(n, d));
//    }
//    Fraction Division(Fraction otherFraction)
//    {
//        int n = numerator * otherFraction.denominator;
//        int d = denominator * otherFraction.numerator;
//        return Fraction(n / GreatestCommonDivider(n, d), d / GreatestCommonDivider(n, d));
//    }
//
//    int GreatestCommonDivider(int n, int d)
//    {
//        int remainder;
//        while (d != 0)
//        {
//            remainder = n % d;
//            n = d;
//            d = remainder;
//        }
//        return n;
//    }
//    void show() // Display method
//    {
//        if (denominator == 1) 
//            cout << numerator << endl;
//        else
//            cout << numerator << "/" << denominator << endl;
//    }
//};
//
//void main()
//{
//    Fraction a(1, 2);
//    Fraction b(1, 4);
//    Fraction result;
//
//    cout << "Our first fraction is :  " ;
//    a.show();
//
//
//    cout << "Our second fraction is : " ;
//    b.show();
//
//
//    cout << "Sum  : ";
//    result = a.Sum(b); // Result: 3/4
//    result.show();
//
//    cout << "Difference : ";
//    result = a.Difference(b); // Result: 1/4
//    result.show();
//
//    cout << "Product : ";
//    result = a.Product(b); // Result: 1/8
//    result.show();
//
//    cout << "Divison : ";
//    result = a.Division(b); // Result: 2
//    result.show();
//
//}
