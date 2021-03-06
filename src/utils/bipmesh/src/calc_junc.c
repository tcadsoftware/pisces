
/*----------------------------------------------------------------------
**  Copyright 1988 by
**  The Board of Trustees of the Leland Stanford Junior University
**  All rights reserved.
**
**  This routine may not be used without the prior written consent of
**  the Board of Trustees of the Leland Stanford University.
**----------------------------------------------------------------------
**/


/*	calc_junc.c		Version 1.1		*/
/*	Last Modification:	8/16/89 08:29:19		*/



#include <math.h>


#ifdef ANSI_FUNC

void
calc_junc (double peak_loc, double peak_dop, double std_dev, double substrate_dop, double *junction)
#else
calc_junc( peak_loc, peak_dop, std_dev, substrate_dop, junction )
double peak_loc;
double peak_dop;
double std_dev;
double substrate_dop;
double *junction;
#endif
{
    if ( peak_dop != 0.0 )  
        *junction = std_dev * sqrt( log(peak_dop/ substrate_dop) )
		+ peak_loc;
    else
       *junction = 0.0;
}
