static const char norm_fg[] = "#f6e6e0";
static const char norm_bg[] = "#0A0101";
static const char norm_border[] = "#aca19c";

static const char sel_fg[] = "#f6e6e0";
static const char sel_bg[] = "#FAA152";
static const char sel_border[] = "#f6e6e0";

static const char urg_fg[] = "#f6e6e0";
static const char urg_bg[] = "#D53E2D";
static const char urg_border[] = "#D53E2D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
