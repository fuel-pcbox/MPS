#include "mps.h"

int main()
{
	FILE* file;

	file = fopen("test.txt","w");

	mps_quater a;
	mps_quater_init(a,32);
	mps_quater_set_d(a,22.0,1.0,232.0,343847.0,MPS_RNDNNNN);

	mps_quater b;
	mps_quater_init(b,32);
	mps_quater_set_d(b,3.0,1.0,2.0,1.0,MPS_RNDNNNN);

	mps_quater_add(a,a,b,MPS_RNDNNNN);

	mps_out_q_str(a,file,6,MPS_RNDNNNN);

	mps_quater_clear(a);
	fclose(file);

	return 0;
}
