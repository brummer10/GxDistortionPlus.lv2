// generated from file './/DistortionPlusPlus.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

namespace DistortionPlusPlus {

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
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fRec2[5];
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fRec5[2];
	double 	fRec6[2];
	double 	fRec3[2];
	double 	fRec4[2];
	double 	fRec0[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec7[2];
	double 	fConst33;

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
	for (int i=0; i<5; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (1.9596195646042e-05 * fConst0);
	fConst2 = (0.0593826089899825 + fConst1);
	fConst3 = ((0.0593826089899825 - fConst1) / fConst2);
	fConst4 = (2.52946678490003e-19 * fConst0);
	fConst5 = (2.29151787037743e-27 + (fConst0 * (2.84593472648519e-12 + (fConst0 * (3.70665922516337e-13 + (fConst0 * (5.76509193836117e-15 + fConst4)))))));
	fConst6 = (1.18884938890301e-21 * fConst0);
	fConst7 = (6.46803346928452e-12 + (fConst0 * (8.55834129447645e-13 + (fConst0 * (1.48492577086897e-14 + (fConst0 * (2.77428947455861e-17 + fConst6)))))));
	fConst8 = (2.50439115648454e-19 * fConst0);
	fConst9 = ((fConst0 * (8.53769712427654e-14 + (fConst0 * (fConst8 - 5.69555466958576e-15)))) - 6.87446741138443e-29);
	fConst10 = (1.17706384354773e-21 * fConst0);
	fConst11 = ((fConst0 * (9.87226854384831e-14 + (fConst0 * (fConst10 - 5.71913636960637e-15)))) - 1.94038571006285e-13);
	fConst12 = (2.29151787037743e-27 + (fConst0 * ((fConst0 * (3.70665922516337e-13 + (fConst0 * (fConst4 - 5.76509193836117e-15)))) - 2.84593472648519e-12)));
	fConst13 = (6.46803346928452e-12 + (fConst0 * ((fConst0 * (1.48492577086897e-14 + (fConst0 * (fConst6 - 2.77428947455861e-17)))) - 8.55834129447645e-13)));
	fConst14 = (1.01178671396001e-18 * fConst0);
	fConst15 = faustpower<2>(fConst0);
	fConst16 = (9.16607148150971e-27 + (fConst0 * ((fConst15 * (1.15301838767223e-14 - fConst14)) - 5.69186945297037e-12)));
	fConst17 = (4.75539755561205e-21 * fConst0);
	fConst18 = (2.58721338771381e-11 + (fConst0 * ((fConst15 * (5.54857894911722e-17 - fConst17)) - 1.71166825889529e-12)));
	fConst19 = (1.37491072222646e-26 + (fConst15 * ((1.51768007094002e-18 * fConst15) - 7.41331845032673e-13)));
	fConst20 = (3.88082008157071e-11 + (fConst15 * ((7.13309633341808e-21 * fConst15) - 2.96985154173794e-14)));
	fConst21 = (9.16607148150971e-27 + (fConst0 * (5.69186945297037e-12 + (fConst15 * (0 - (1.15301838767223e-14 + fConst14))))));
	fConst22 = (2.58721338771381e-11 + (fConst0 * (1.71166825889529e-12 + (fConst15 * (0 - (5.54857894911722e-17 + fConst17))))));
	fConst23 = (1.00175646259382e-18 * fConst0);
	fConst24 = ((fConst15 * (1.13911093391715e-14 - fConst23)) - 1.37489348227689e-28);
	fConst25 = (4.70825537419093e-21 * fConst0);
	fConst26 = ((fConst15 * (1.14382727392127e-14 - fConst25)) - 3.8807714201257e-13);
	fConst27 = ((1.50263469389072e-18 * fConst15) - 1.70753942485531e-13);
	fConst28 = ((7.06238306128639e-21 * fConst15) - 1.97445370876966e-13);
	fConst29 = (1.37489348227689e-28 + (fConst15 * (0 - (1.13911093391715e-14 + fConst23))));
	fConst30 = (3.8807714201257e-13 + (fConst15 * (0 - (1.14382727392127e-14 + fConst25))));
	fConst31 = (6.87446741138443e-29 + (fConst0 * (8.53769712427654e-14 + (fConst0 * (5.69555466958576e-15 + fConst8)))));
	fConst32 = (1.94038571006285e-13 + (fConst0 * (9.87226854384831e-14 + (fConst0 * (5.71913636960637e-15 + fConst10)))));
	fConst33 = (0.0296912055243061 / fConst2);
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
		fRec2[0] = ((double)input0[i] - (((((fRec2[1] * (fConst22 + (fConst21 * fRec1[0]))) + (fRec2[2] * (fConst20 + (fConst19 * fRec1[0])))) + (fRec2[3] * (fConst18 + (fConst16 * fRec1[0])))) + (fRec2[4] * (fConst13 + (fConst12 * fRec1[0])))) / fTemp0));
		double fTemp1 = symclip((fConst0 * ((((((fRec2[0] * (fConst32 + (fConst31 * fRec1[0]))) + (fRec2[1] * (fConst30 + (fConst29 * fRec1[0])))) + (fConst0 * (fRec2[2] * (fConst28 + (fConst27 * fRec1[0]))))) + (fRec2[3] * (fConst26 + (fConst24 * fRec1[0])))) + (fRec2[4] * (fConst11 + (fConst9 * fRec1[0])))) / fTemp0)));
		double fTemp2 = (fRec3[1] * (0 - (0.3141592653589793 * fRec4[1])));
		double fTemp3 = (fTemp1 + (fTemp2 + (fRec5[1] * (0 - (0.3141592653589793 * fRec6[1])))));
		fRec5[0] = fTemp3;
		fRec6[0] = (0.3141592653589793 * faustpower<2>(fTemp3));
		fRec3[0] = (fRec5[1] + fRec6[0]);
		fRec4[0] = (0.3141592653589793 * faustpower<2>((fTemp2 + fTemp1)));
		fRec0[0] = ((0.6 * ((2 * (fRec3[1] + fRec4[0])) + fTemp1)) - (fConst3 * fRec0[1]));
		fRec7[0] = (fSlow1 + (0.993 * fRec7[1]));
		output0[i] = (FAUSTFLOAT)(fConst33 * (fRec7[0] * (fRec0[1] + fRec0[0])));
		// post processing
		fRec7[1] = fRec7[0];
		fRec0[1] = fRec0[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec6[1] = fRec6[0];
		fRec5[1] = fRec5[0];
		for (int i=4; i>0; i--) fRec2[i] = fRec2[i-1];
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

} // end namespace DistortionPlusPlus
