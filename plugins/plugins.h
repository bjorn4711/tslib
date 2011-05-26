#define TSLIB_DECLARE_MODULE(name) \
	TSAPI struct tslib_module_info *name##_mod_init(struct tsdev *dev, const char *params)

TSLIB_DECLARE_MODULE(linear);
TSLIB_DECLARE_MODULE(dejitter);
TSLIB_DECLARE_MODULE(linear_h2200);
TSLIB_DECLARE_MODULE(variance);
TSLIB_DECLARE_MODULE(pthres);

TSLIB_DECLARE_MODULE(egalax);
TSLIB_DECLARE_MODULE(ucb1x00);
TSLIB_DECLARE_MODULE(corgi);
TSLIB_DECLARE_MODULE(collie);
TSLIB_DECLARE_MODULE(h3600);
TSLIB_DECLARE_MODULE(mk712);
TSLIB_DECLARE_MODULE(arctic2);
TSLIB_DECLARE_MODULE(tatung);
TSLIB_DECLARE_MODULE(input);
TSLIB_DECLARE_MODULE(cy8mrln_palmpre);

