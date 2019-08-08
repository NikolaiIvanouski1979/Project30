# include <iostream>
using namespace std;

class part
{
private:
	int modelnum;
	int partnum;
	float cost;
public:
	void setpart(int mn, int pn, float c)
	{
		modelnum = mn;
		partnum = pn;
		cost = c;
	}
	void showpart()
	{
		cout << "Model: " << modelnum << endl;
		cout << "Detail: " << partnum << endl;
		cout << "Cost: " << cost << endl;
	}
};
int main()
{
	part part1;
	part1.setpart(6244, 373, 217.55F);
	part1.showpart();
	system("pause");
	return 0;
}