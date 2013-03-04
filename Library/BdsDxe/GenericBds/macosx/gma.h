#ifndef __LIBSAIO_GMA_H
#define __LIBSAIO_GMA_H
#include "device_inject.h"

BOOLEAN setup_gma_devprop (pci_dt_t *gma_dev);

UINT8 reg_TRUE[]  = { 0x01, 0x00, 0x00, 0x00 };
UINT8 reg_FALSE[] = { 0x00, 0x00, 0x00, 0x00 };

struct gma_gpu_t {
  UINT32 device;
  CHAR8 *name;
};

UINT8 GMAX3100_vals[23][4] = {
  { 0x01, 0x00, 0x00, 0x00 }, //0 "AAPL,HasPanel"
  { 0x01, 0x00, 0x00, 0x00 }, //1 "AAPL,SelfRefreshSupported"
  { 0x01, 0x00, 0x00, 0x00 }, //2 "AAPL,aux-power-connected"
  { 0x01, 0x00, 0x00, 0x08 }, //3 "AAPL,backlight-control"
  { 0x00, 0x00, 0x00, 0x00 }, //4 "AAPL00,blackscreen-preferences"
  { 0x56, 0x00, 0x00, 0x08 }, //5 "AAPL01,BacklightIntensity"
  { 0x00, 0x00, 0x00, 0x00 }, //6 "AAPL01,blackscreen-preferences"
  { 0x01, 0x00, 0x00, 0x00 }, //7 "AAPL01,DataJustify"
  { 0x20, 0x00, 0x00, 0x00 }, //8 "AAPL01,Depth"
  { 0x01, 0x00, 0x00, 0x00 }, //9 "AAPL01,Dither"
  { 0x20, 0x03, 0x00, 0x00 }, //10 "AAPL01,Height"
  { 0x00, 0x00, 0x00, 0x00 }, //11 "AAPL01,Interlace"
  { 0x00, 0x00, 0x00, 0x00 }, //12 "AAPL01,Inverter"
  { 0x08, 0x52, 0x00, 0x00 }, //13 "AAPL01,InverterCurrent"
  { 0x00, 0x00, 0x00, 0x00 }, //14 "AAPL01,LinkFormat"
  { 0x00, 0x00, 0x00, 0x00 }, //15 "AAPL01,LinkType"
  { 0x01, 0x00, 0x00, 0x00 }, //16 "AAPL01,Pipe"
  { 0x01, 0x00, 0x00, 0x00 }, //17 "AAPL01,PixelFormat"
  { 0x01, 0x00, 0x00, 0x00 }, //18 "AAPL01,Refresh"
  { 0x3B, 0x00, 0x00, 0x00 }, //19 "AAPL01,Stretch"
  { 0xc8, 0x95, 0x00, 0x00 }, //20 "AAPL01,InverterFrequency"
  { 0x6B, 0x10, 0x00, 0x00 }, //21 "subsystem-vendor-id"
  { 0xA2, 0x00, 0x00, 0x00 } //22 "subsystem-id"
};

static struct gma_gpu_t KnownGPUS[] = {
  { 0x00000000, "Unknown"     },
  { 0x80862582, "GMA 915" },
  { 0x80862592, "GMA 915" },
  { 0x808627A2, "GMA 950" },
  { 0x808627AE, "GMA 950" },
#if 0
  { 0x808627A6, "Mobile GMA950" }, //not a GPU
#endif
  { 0x8086A011, "Mobile GMA3150"  },
  { 0x8086A012, "Mobile GMA3150"  },
  { 0x80862772, "Desktop GMA950"  },
#if 0
  { 0x80862776, "Desktop GMA950"  }, //not a GPU
  { 0x8086A001, "Desktop GMA3150" },
#endif
  { 0x8086A001, "Mobile GMA3150"  },
  { 0x8086A002, "Desktop GMA3150" },
  { 0x80862A02, "GMAX3100"    },
#if 0
  { 0x80862A03, "GMAX3100"    },//not a GPU
#endif
  { 0x80862A12, "GMAX3100"    },
#if 0
  { 0x80862A13, "GMAX3100"    },
#endif
  { 0x80862A42, "GMAX3100"    },
#if 0
  { 0x80862A43, "GMAX3100"    },
  { 0x80860044, "HD2000"  }, //host bridge
#endif
  { 0x80860046, "HD2000"  },
  { 0x80860112, "HD3000"  },
  { 0x80860116, "HD3000"  },
  { 0x80860126, "HD3000"  },
};

#endif /* !__LIBSAIO_GMA_H */
