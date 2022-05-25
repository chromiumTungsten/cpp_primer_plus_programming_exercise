#ifndef SALES_H_
#define SALES_H_

namespace SALES
{
	class Sales{
		private:
			static const int QUARTERS = 4;
			double sales[QUARTERS];
			double average;
			double max;
			double min;
			void setMMA();
		public:
			Sales() { sales[0] = 0; average = 0; max = 0 ;min =0 ;}
			Sales(const double ar[], int n);
			void show();
			void setSale();
	};

}
#endif
