// generated from file './/DistortionPlus.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace DistortionPlus {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fRec2[4];
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fRec0[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst28;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "mxropamp";
	name = N_("mxropamp");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<4; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (6.7567415388704e-06 * fConst0);
	fConst2 = (0.675676406134221 + fConst1);
	fConst3 = ((0.675676406134221 - fConst1) / fConst2);
	fConst4 = (1.78837522296558e-14 * fConst0);
	fConst5 = (3.3368018004287e-26 + (fConst0 * (8.85334268794843e-12 + (fConst0 * (1.15270521797089e-12 + fConst4)))));
	fConst6 = (8.4277879117959e-17 * fConst0);
	fConst7 = (9.41844966803024e-11 + (fConst0 * (1.2304543190111e-11 + (fConst0 * (1.95684851542309e-13 + fConst6)))));
	fConst8 = (1.77064633524923e-14 * fConst0);
	fConst9 = ((fConst0 * (2.65596950287385e-13 - fConst8)) - 1.00102798812217e-27);
	fConst10 = (1.7789683730249e-14 * fConst0);
	fConst11 = ((fConst0 * (4.55211887363228e-13 - fConst10)) - 2.82549947114239e-12);
	fConst12 = (3.3368018004287e-26 + (fConst0 * ((fConst0 * (1.15270521797089e-12 - fConst4)) - 8.85334268794843e-12)));
	fConst13 = (9.41844966803024e-11 + (fConst0 * ((fConst0 * (1.95684851542309e-13 - fConst6)) - 1.2304543190111e-11)));
	fConst14 = (5.36512566889675e-14 * fConst0);
	fConst15 = (1.00104054012861e-25 + (fConst0 * ((fConst0 * (fConst14 - 1.15270521797089e-12)) - 8.85334268794843e-12)));
	fConst16 = (2.52833637353877e-16 * fConst0);
	fConst17 = (2.82553490040907e-10 + (fConst0 * ((fConst0 * (fConst16 - 1.95684851542309e-13)) - 1.2304543190111e-11)));
	fConst18 = (1.00104054012861e-25 + (fConst0 * (8.85334268794843e-12 + (fConst0 * (0 - (1.15270521797089e-12 + fConst14))))));
	fConst19 = (2.82553490040907e-10 + (fConst0 * (1.2304543190111e-11 + (fConst0 * (0 - (1.95684851542309e-13 + fConst16))))));
	fConst20 = (5.3119390057477e-14 * fConst0);
	fConst21 = ((fConst0 * (fConst20 - 2.65596950287385e-13)) - 1.00102798812217e-27);
	fConst22 = (5.33690511907471e-14 * fConst0);
	fConst23 = ((fConst0 * (fConst22 - 4.55211887363228e-13)) - 2.82549947114239e-12);
	fConst24 = (1.00102798812217e-27 + (fConst0 * (0 - (2.65596950287385e-13 + fConst20))));
	fConst25 = (2.82549947114239e-12 + (fConst0 * (0 - (4.55211887363228e-13 + fConst22))));
	fConst26 = (1.00102798812217e-27 + (fConst0 * (2.65596950287385e-13 + fConst8)));
	fConst27 = (2.82549947114239e-12 + (fConst0 * (4.55211887363228e-13 + fConst10)));
	fConst28 = (0.33783707694352 / fConst2);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
	double 	fSlow0 = (4.748558434412966e-05 * (exp((5 * (1 - double(fslider0)))) - 1));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		double fTemp0 = (fConst7 + (fConst5 * fRec1[0]));
		fRec2[0] = ((double)input0[i] - ((((fRec2[1] * (fConst19 + (fConst18 * fRec1[0]))) + (fRec2[2] * (fConst17 + (fConst15 * fRec1[0])))) + (fRec2[3] * (fConst13 + (fConst12 * fRec1[0])))) / fTemp0));
		fRec0[0] = (symclip((fConst0 * (((((fRec2[0] * (fConst27 + (fConst26 * fRec1[0]))) + (fRec2[1] * (fConst25 + (fConst24 * fRec1[0])))) + (fRec2[2] * (fConst23 + (fConst21 * fRec1[0])))) + (fRec2[3] * (fConst11 + (fConst9 * fRec1[0])))) / fTemp0))) - (fConst3 * fRec0[1]));
		fRec3[0] = (fSlow1 + (0.993 * fRec3[1]));
		output0[i] = (FAUSTFLOAT)(fConst28 * (fRec3[0] * (fRec0[1] + fRec0[0])));
		// post processing
		fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
		for (int i=3; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DISTORTION: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case OUTPUT: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DISTORTION, 
   OUTPUT, 
} PortIndex;
*/

} // end namespace DistortionPlus
