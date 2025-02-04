#include "Test.h"
#include "Pattern.h"
class DECIMF32:public Client::Suite
    {
        public:
            DECIMF32(Testing::testID_t id);
            void setUp(Testing::testID_t,std::vector<Testing::param_t>& params,Client::PatternMgr *mgr);
            void tearDown(Testing::testID_t,Client::PatternMgr *mgr);
        private:
            #include "DECIMF32_decl.h"
            Client::Pattern<float32_t> coefs;
            Client::Pattern<float32_t> samples;

            Client::LocalPattern<float32_t> output;
            Client::LocalPattern<float32_t> state;

            int nbTaps;
            int nbSamples;
            int decimationFactor;
            int interpolationFactor;

            arm_fir_decimate_instance_f32  instDecim;
            arm_fir_interpolate_instance_f32 instInterpol;
            
            
    };