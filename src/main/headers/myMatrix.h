#ifndef MYMATRIX_H
#define MYMATRIX_H

#include <list>
#include <vector>
#include <iostream>

class myMatrix 
{
public:
	myMatrix();
	myMatrix(int x, int y);
	virtual ~myMatrix();

	int getRows() const {return rows;}
	int getCols() const {return cols;}
	double getC0() const {return nMatrix[0][2];}
	double getC1() const {return nMatrix[1][2];}
	
	void setRows(int x) {rows = x;}
	void setCols(int y) {cols = y;}

	void addContent(int i, std::list<double> data);

	void transform(myMatrix M);
	void multiply(myMatrix M, myMatrix N);

	void createAugmented(myMatrix M, myMatrix N);
	void sortRow();
	void scale(int x);
	void reduce();
	void backSolve();

	void Display(std::ostream &outs) const;

private:
	int rows;
	int cols;
	std::vector<std::vector<double> > nMatrix;

};
std::ostream& operator<<(std::ostream &outs, const myMatrix &prt);
//--------------------------------------------------------------------------
inline
std::ostream& operator<<(std::ostream &outs, const myMatrix &prt)
{
    prt.Display(outs);

    return outs;
}
#endif