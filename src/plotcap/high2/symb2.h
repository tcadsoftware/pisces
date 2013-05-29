/* Vector array and vector locations for the 'symbol' routine.
 *  This file was generated by 'mksym'.
 *  Number of vectors (size of VECTS) = 912 bytes
 */

/* First: Define a structure to hold all the symbol drawing information
 *  This contains a pointer to to the array of vector locations
 *  for each symbol, a pointer to the array of vectors, and the
 *  three sizes of symbols herein defined (width, height, distender).
 */
struct _symb2 {   /* to hold information about symbol defs */
	short  *sym_locs;    /* each symbols vector list location*/
	char   *sym_vect;    /* vector list for all symbols */
	int     sym_hit ;    /* symbol height         */
	int     sym_wid ;    /* symbol width          */
	int     sym_dis ;    /* symbol distender size */
	};

/* Vector list array for all symbols for 'symb2' */ 
static char Symb2Vecs[] = {
     255, 141,  81,  85,  45,  41, 163, 255, 142,  44,  55,  75,  84,  82,  71,
      51,  42, 163, 255, 183,  41,  45,  83, 163, 255, 143,  83, 161,  65, 163,
     255, 181,  45, 141,  85, 163, 255, 143,  61,  83,  61, 183,  65,  43, 163,
     255, 143,  83,  72,  83,  74, 163, 255, 141,  85,  81,  45, 163, 255, 171,
      81,  85,  41,  45,  55, 162,  64, 163, 255, 143,  63,  81,  63,  85, 163,
     255, 142,  44,  55,  75,  84,  82,  71,  51,  42, 163, 255, 143,  83, 181,
      45, 141,  85, 161,  65, 163, 255, 142,  44,  54,  72,  82,  84,  74,  52,
      42, 163, 255, 173,  83,  84,  74,  63, 163, 255, 183,  41,  45,  83, 163,
     133,  71,  75,  33, 163, 255, 144,  43,  63,  74,  75,  55,  54,  63,  73,
      82,  92,  94,  84,  73,  63,  52,  51,  71,  72,  63, 163, 255, 151,  42,
      44,  55,  64,  62,  71,  82,  84,  75, 193,  33, 255, 195,  84,  74,  63,
      54,  44,  35, 255, 191,  82,  72,  63,  52,  42,  31, 255, 135,  34,  94,
      95, 255, 131,  32,  92,  91, 255, 135,  54,  74,  95, 255, 131,  52,  72,
      91, 255, 144,  61,  84, 255, 142,  65,  82, 255, 135,  71,  81,  92,  93,
      84,  74,  63,  62,  51,  41,  32,  34,  45, 255, 192,  93,  83,  82,  92,
     194,  32, 133,  34,  44,  43,  33, 255, 164,  73,  72,  61,  51,  42,  43,
      54,  74,  44,  55,  75,  84,  81,  70,  40,  31,  34, 255, 130,  36, 255,
     162,  64, 255, 133,  93, 255, 143,  83, 161,  65, 255, 143,  83, 161,  65,
     181,  45, 141,  85, 255, 151,  55, 175,  71, 182,  42, 144,  84, 255, 151,
      55, 171,  75, 255, 161,  72,  54,  65, 255, 193,  53, 133,  33, 255, 182,
      81,  91,  92,  82,  71, 185,  84,  94,  95,  85,  74, 255, 184,  83,  93,
      94,  84,  73, 255, 182,  83,  93,  92,  82,  73, 255, 182,  93,  84, 255,
     143,  53,  54,  44,  43, 173,  83,  84,  74,  73, 255, 134,  33,  43,  44,
      34, 255, 134,  33,  43,  44,  34, 134,  23, 255, 134,  33,  43,  44,  34,
     134,  23, 164,  63,  73,  74,  64, 255, 191,  35, 255, 131,  95, 255, 181,
      92,  93,  84,  74,  52,  42, 132,  32, 255, 131,  93,  35, 154,  52, 255,
     131,  91,  94,  85,  75,  64,  61,  64,  55,  45,  34,  31, 255, 185,  94,
      92,  81,  41,  32,  34,  45, 255, 131,  91,  94,  85,  45,  34,  31, 255,
     195,  91,  31,  35, 161,  64, 255, 195,  91,  31, 161,  64, 255, 175,  85,
      94,  92,  81,  41,  32,  34,  45, 154,  55,  35, 255, 131,  91,  61,  65,
      95,  35, 255, 132,  34,  33,  93,  92,  94, 255, 141,  32,  33,  44,  94,
     255, 132,  92, 195,  62,  35, 255, 192,  32,  35, 255, 131,  91,  33,  95,
      35, 255, 131,  91,  35,  95, 255, 132,  34,  45,  85,  94,  92,  81,  41,
      32, 255, 132,  92,  94,  85,  75,  64,  62, 255, 132,  34,  45,  85,  94,
      92,  81,  41,  32, 144,  35, 255, 132,  92,  94,  85,  75,  64,  62,  63,
      35, 255, 141,  32,  34,  45,  55,  64,  62,  71,  81,  92,  94,  85, 255,
     133,  93,  91,  95, 255, 191,  41,  32,  34,  45,  95,  35, 255, 191,  33,
      95, 255, 191,  32,  93,  34,  95, 255, 131,  95, 191,  35, 255, 191,  63,
      95,  63,  33, 255, 191,  95,  31,  35, 162,  64, 255, 165,  74,  72,  61,
      41,  32,  34,  45,  75,  35, 255, 191,  31,  61,  72,  74,  65,  45,  34,
      32,  41, 255, 165,  74,  72,  61,  41,  32,  34,  45, 255, 195,  35,  65,
      74,  72,  61,  41,  32,  34,  45, 255, 145,  34,  32,  41,  61,  72,  74,
      65,  55,  51, 255, 132,  82,  93,  84, 161,  64, 255, 121,  12,  14,  25,
      75,  65,  74,  72,  61,  41,  32,  34,  45, 255, 191,  31,  61,  72,  74,
      65,  35, 255, 132,  34,  33,  73,  72, 183,  83, 255, 121,  12,  23,  73,
      72, 183,  83, 255, 132,  92,  91, 174,  52,  34, 255, 191,  92,  42,  33,
      44, 255, 171,  31,  61,  72,  63,  33,  63,  74,  65,  35, 255, 131,  71,
      61,  72,  74,  65,  35, 255, 132,  41,  61,  72,  74,  65,  45,  34,  32,
     255, 132,  41,  61,  72,  74,  65,  45,  34,  32, 111,  71, 255, 132,  41,
      61,  72,  74,  65,  45,  34,  32, 175,  15,  26, 255, 131,  71,  61,  72,
      74,  65, 255, 141,  32,  34,  45,  54,  52,  61,  72,  74,  65, 255, 193,
      43,  34,  45, 172,  74, 255, 171,  41,  32,  34,  45,  35,  75, 255, 171,
      33,  75, 255, 171,  32,  73,  34,  75, 255, 131,  75, 171,  35, 255, 171,
      33,  75,  12, 255, 171,  75,  31,  35, 152,  54, 255, 132,  34,  45,  85,
      94,  92,  81,  41,  32, 131,  95, 255, 182,  93,  33,  32,  34, 255, 181,
      92,  94,  85,  75,  64,  62,  51,  31,  35, 255, 181,  92,  94,  85,  75,
      64,  62,  64,  55,  45,  34,  32,  41, 255, 134,  94,  61,  65, 255, 131,
      34,  45,  55,  64,  61,  91,  95, 255, 185,  94,  92,  81,  41,  32,  34,
      45,  55,  64,  62,  51, 255, 132,  95,  91, 162,  64, 255, 132,  34,  45,
      55,  64,  62,  71,  81,  92,  94,  85,  75,  64,  62,  51,  41,  32, 255,
     141,  32,  34,  45,  85,  94,  92,  81,  71,  62,  64,  75,    255 };

static short Symb2Locs[128] = { 
        1,     8,    19,    25,    31,    37,    46,    53,    59,    69,
       76,    87,    97,   108,   115,   126,     0,     0,     0,     0,
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
        0,     0,     0,   294,   299,   275,   148,   220,   205,   312,
      187,   192,   266,   261,   347,   255,   341,   371,   806,   818,
      824,   835,   849,   854,   863,   876,   882,   900,   330,   355,
      197,   284,   201,   374,   233,   384,   390,   403,   412,   420,
      427,   433,   446,   453,   460,   466,   472,   476,   482,   487,
      497,   505,   517,   527,   540,   545,   553,   557,   563,   568,
      574,   177,   368,   182,   326,   252,   319,   581,   592,   603,
      612,   623,   634,   641,   655,   663,   671,   679,   686,   692,
      703,   711,   721,   733,   746,   753,   764,   771,   779,   783,
      789,   794,   799,   161,   258,   169,   289,     0 };

/* This is the structure for the above defined symbols */
static struct _symb2 Symb2Fonts = {
	Symb2Locs ,	/* the locations array   */
	Symb2Vecs , 	/* the vector list array */
	   7 ,	/* symbol height         */
	   7 ,	/* symbol width          */
	   3 ,	/* symbol distender size */
	};

/* end of symbol vectors */