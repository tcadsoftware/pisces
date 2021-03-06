/*----------------------------------------------------------------------
**  Copyright 1988 by
**  The Board of Trustees of the Leland Stanford Junior University
**  All rights reserved.
**
**  This routine may not be used without the prior written consent of
**  the Board of Trustees of the Leland Stanford University.
**----------------------------------------------------------------------
**/


/* getdefprofiles - gathers default information for profiles */

#include <stdio.h>
#include "struct.h"
extern dop_str dop_data[10];
extern vert_str vert_info;
extern read_defdop();
extern dopingmode;

#ifdef ANSI_FUNC

int 
getdefprofiles (void)
#else

getdefprofiles()
#endif

{
    int typeofprofile;
    char buf[3];

    switch ( dopingmode )  {
	case  0  :   	typeofprofile = 0;
    		read_defdop( &(dop_data[0]), 
			vert_info.substrate_dop, typeofprofile,
			&(vert_info.chan_junc) );
    		read_defdop( &(dop_data[1]), 
		    vert_info.substrate_dop, typeofprofile,
		    &(vert_info.phos_junc) );
    		read_defdop( &(dop_data[2]), 
			vert_info.substrate_dop, typeofprofile,
			&(vert_info.ars_junc) );
		break;

  	case 1  :  	typeofprofile = 1;
    		read_defdop( &(dop_data[0]), 
			vert_info.substrate_dop, typeofprofile,
			&(vert_info.chan_junc) );
    		read_defdop( &(dop_data[1]), 
		    vert_info.substrate_dop, typeofprofile,
		    &(vert_info.phos_junc) );
    		read_defdop( &(dop_data[2]), 
			vert_info.substrate_dop, typeofprofile,
			&(vert_info.ars_junc) );
		if ( dop_data[2].type != SUPREM3EXPORT )
		    computesubstratetype( dop_data[2],
			&(vert_info.substrate_dop_type) );
		break;

  	case 2  :  /* ask for information */
		printf( "\tType of profile for Channel? [a or s]  :   ");
		fflush( stdout );
		scanf( "%s", buf );
		if ( (buf[0] == 's') || (buf[0] == 'S') )
		    typeofprofile = 1;
		else 
		    typeofprofile = 0;
    		read_defdop( &(dop_data[0]), 
			vert_info.substrate_dop, typeofprofile,
			&(vert_info.chan_junc) );
		printf( "\tType of profile for LDD? [a or s]  :   ");
		fflush( stdout );
		scanf( "%s", buf );
		if ( (buf[0] == 's') || (buf[0] == 'S') )
		    typeofprofile = 1;
		else 
		    typeofprofile = 0;
    		read_defdop( &(dop_data[1]), 
		    vert_info.substrate_dop, typeofprofile,
		    &(vert_info.phos_junc) );
		printf( "\tType of profile for S/D? [a or s]  :   ");
		fflush( stdout );
		scanf( "%s", buf );
		if ( (buf[0] == 's') || (buf[0] == 'S') )
		    typeofprofile = 1;
		else 
		    typeofprofile = 0;
    		read_defdop( &(dop_data[2]), 
			vert_info.substrate_dop, typeofprofile,
			&(vert_info.ars_junc) );
		if ( dop_data[2].type != SUPREM3EXPORT )
		    computesubstratetype( dop_data[2],
			&(vert_info.substrate_dop_type) );
		break;

        default:
                break;

    } /* end switch */
}
