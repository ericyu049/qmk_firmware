#pragma once

#include "quantum.h"

#define LAYOUT_68_ansi( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13,     K14, K15, \
    K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,     K30, K31, \
    K32, K33, K34, K35, K36, K37, K38, K39, K40, K41, K42, K43, K44,                    \
    K45, K46, K47, K48, K49, K50, K51, K52, K53, K54, K55, K56,               K57,      \
    K58, K59, K60,           K61,                K62, K63, K64,          K65, K66, K67  \
) { \
    { K00, K02, K04, K06, K08, K10, K12, K14, },  \
    { K01, K03, K05, K07, K09, K11, K13, K15  },  \
    { K16, K18, K20, K22, K24, K26, K28, K30  },  \
    { K17, K19, K21, K23, K25, K27, K29, K31  },  \
    { K32, K34, K36, K38, K40, K42, K44  },  \
    { K33, K35, K37, K39, K41, K43  },  \
    { K45, K47, K49, K51, K53, K55, K57  },  \
    { K46, K48, K50, K52, K54, K56  },  \
    { K58, K60, K62, K64, K66  },  \
    { K59, K61, K63, K65, K67  } \
}
