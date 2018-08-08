
// mxrclipping table generated by DK/tube_table_gen.py -- do not modify manually

struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};

static table1d_imp<200> tube_table __rt_data = {
	0.0000,0.447811,199,200, {
	0.000000000000,0.001538301146,0.004583506947,0.007597956975,0.010613034511,
	0.013628098922,0.016643163172,0.019658226881,0.022673289938,0.025688352218,
	0.028703413587,0.031718473906,0.034733533021,0.037748590768,0.040763646968,
	0.043778701429,0.046793753938,0.049808804265,0.052823852155,0.055838897332,
	0.058853939490,0.061868978293,0.064884013372,0.067899044318,0.070914070684,
	0.073929091973,0.076944107639,0.079959117078,0.082974119625,0.085989114541,
	0.089004101015,0.092019078148,0.095034044947,0.098049000314,0.101063943036,
	0.104078871774,0.107093785043,0.110108681208,0.113123558455,0.116138414784,
	0.119153247981,0.122168055598,0.125182834930,0.128197582986,0.131212296459,
	0.134226971694,0.137241604647,0.140256190850,0.143270725363,0.146285202724,
	0.149299616893,0.152313961196,0.155328228251,0.158342409900,0.161356497124,
	0.164370479951,0.167384347360,0.170398087168,0.173411685906,0.176425128690,
	0.179438399067,0.182451478852,0.185464347949,0.188476984146,0.191489362902,
	0.194501457094,0.197513236758,0.200524668784,0.203535716599,0.206546339797,
	0.209556493754,0.212566129183,0.215575191661,0.218583621098,0.221591351158,
	0.224598308623,0.227604412694,0.230609574224,0.233613694880,0.236616666220,
	0.239618368691,0.242618670531,0.245617426570,0.248614476927,0.251609645591,
	0.254602738887,0.257593543804,0.260581826203,0.263567328876,0.266549769465,
	0.269528838235,0.272504195700,0.275475470104,0.278442254760,0.281404105255,
	0.284360536543,0.287311019927,0.290254979980,0.293191791412,0.296120775950,
	0.299041199269,0.301952268035,0.304853127154,0.307742857293,0.310620472790,
	0.313484920061,0.316335076629,0.319169750910,0.321987682903,0.324787545917,
	0.327567949490,0.330327443614,0.333064524393,0.335777641214,0.338465205472,
	0.341125600864,0.343757195184,0.346358353510,0.348927452600,0.351462896239,
	0.353963131230,0.356426663647,0.358852074952,0.361238037523,0.363583329171,
	0.365886846210,0.368147614716,0.370364799662,0.372537711694,0.374665811413,
	0.376748711120,0.378786174083,0.380778111466,0.382724577131,0.384625760602,
	0.386481978488,0.388293664714,0.390061359891,0.391785700147,0.393467405722,
	0.395107269599,0.396706146386,0.398264941642,0.399784601791,0.401266104732,
	0.402710451200,0.404118656934,0.405491745655,0.406830742845,0.408136670296,
	0.409410541403,0.410653357138,0.411866102668,0.413049744544,0.414205228424,
	0.415333477251,0.416435389863,0.417511839948,0.418563675333,0.419591717534,
	0.420596761549,0.421579575847,0.422540902519,0.423481457580,0.424401931368,
	0.425302989053,0.426185271206,0.427049394431,0.427895952040,0.428725514758,
	0.429538631444,0.430335829835,0.431117617282,0.431884481497,0.432636891284,
	0.433375297265,0.434100132593,0.434811813647,0.435510740709,0.436197298627,
	0.436871857447,0.437534773035,0.438186387670,0.438827030620,0.439457018691,
	0.440076656761,0.440686238284,0.441286045782,0.441876351312,0.442457416910,
	0.443029495022,0.443592828914,0.444147653059,0.444694193516,0.445232668283,
	0.445763287637,0.446286254464,0.446801764564,0.447310006950,0.447811164132
	}
};

double always_inline symclip(double x) {
    double f = fabs(x);
    f = f * tube_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = tube_table.data[0];
    } else if (i >= tube_table.size-1) {
        f = tube_table.data[tube_table.size-1];
    } else {
	f -= i;
	f = tube_table.data[i]*(1-f) + tube_table.data[i+1]*f;
    }
    return copysign(f, x);
}
