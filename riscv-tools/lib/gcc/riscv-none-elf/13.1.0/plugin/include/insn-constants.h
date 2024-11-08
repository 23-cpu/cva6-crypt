/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define VTYPE_REGNUM 67
#define S0_REGNUM 8
#define S10_REGNUM 26
#define S7_REGNUM 23
#define S3_REGNUM 19
#define TP_REGNUM 4
#define S6_REGNUM 22
#define S11_REGNUM 27
#define EXCEPTION_RETURN 2
#define VL_REGNUM 66
#define T0_REGNUM 5
#define S8_REGNUM 24
#define NORMAL_RETURN 0
#define S1_REGNUM 9
#define INVALID_ATTRIBUTE 255
#define S4_REGNUM 20
#define T1_REGNUM 6
#define SIBCALL_RETURN 1
#define X0_REGNUM 0
#define GP_REGNUM 3
#define S9_REGNUM 25
#define RETURN_ADDR_REGNUM 1
#define S2_REGNUM 18
#define S5_REGNUM 21

enum unspec {
  UNSPEC_EH_RETURN = 0,
  UNSPEC_ADDRESS_FIRST = 1,
  UNSPEC_PCREL = 2,
  UNSPEC_LOAD_GOT = 3,
  UNSPEC_TLS = 4,
  UNSPEC_TLS_LE = 5,
  UNSPEC_TLS_IE = 6,
  UNSPEC_TLS_GD = 7,
  UNSPEC_AUIPC = 8,
  UNSPEC_FLT_QUIET = 9,
  UNSPEC_FLE_QUIET = 10,
  UNSPEC_COPYSIGN = 11,
  UNSPEC_LRINT = 12,
  UNSPEC_LROUND = 13,
  UNSPEC_FMIN = 14,
  UNSPEC_FMAX = 15,
  UNSPEC_TIE = 16,
  UNSPEC_ORC_B = 17,
  UNSPEC_BREV8 = 18,
  UNSPEC_ZIP = 19,
  UNSPEC_UNZIP = 20,
  UNSPEC_PACK = 21,
  UNSPEC_PACKH = 22,
  UNSPEC_PACKW = 23,
  UNSPEC_CLMUL = 24,
  UNSPEC_CLMULH = 25,
  UNSPEC_XPERM8 = 26,
  UNSPEC_XPERM4 = 27,
  UNSPEC_AES_DSI = 28,
  UNSPEC_AES_DSMI = 29,
  UNSPEC_AES_DS = 30,
  UNSPEC_AES_DSM = 31,
  UNSPEC_AES_IM = 32,
  UNSPEC_AES_KS1I = 33,
  UNSPEC_AES_KS2 = 34,
  UNSPEC_AES_ES = 35,
  UNSPEC_AES_ESM = 36,
  UNSPEC_AES_ESI = 37,
  UNSPEC_AES_ESMI = 38,
  UNSPEC_SHA_256_SIG0 = 39,
  UNSPEC_SHA_256_SIG1 = 40,
  UNSPEC_SHA_256_SUM0 = 41,
  UNSPEC_SHA_256_SUM1 = 42,
  UNSPEC_SHA_512_SIG0 = 43,
  UNSPEC_SHA_512_SIG0H = 44,
  UNSPEC_SHA_512_SIG0L = 45,
  UNSPEC_SHA_512_SIG1 = 46,
  UNSPEC_SHA_512_SIG1H = 47,
  UNSPEC_SHA_512_SIG1L = 48,
  UNSPEC_SHA_512_SUM0 = 49,
  UNSPEC_SHA_512_SUM0R = 50,
  UNSPEC_SHA_512_SUM1 = 51,
  UNSPEC_SHA_512_SUM1R = 52,
  UNSPEC_SM3_P0 = 53,
  UNSPEC_SM3_P1 = 54,
  UNSPEC_SM4_ED = 55,
  UNSPEC_SM4_KS = 56,
  UNSPEC_COMPARE_AND_SWAP = 57,
  UNSPEC_SYNC_OLD_OP = 58,
  UNSPEC_SYNC_EXCHANGE = 59,
  UNSPEC_ATOMIC_STORE = 60,
  UNSPEC_MEMORY_BARRIER = 61,
  UNSPEC_VSETVL = 62,
  UNSPEC_VUNDEF = 63,
  UNSPEC_VPREDICATE = 64,
  UNSPEC_VLMAX = 65,
  UNSPEC_STRIDED = 66,
  UNSPEC_ORDERED = 67,
  UNSPEC_UNORDERED = 68,
  UNSPEC_VMULHS = 69,
  UNSPEC_VMULHU = 70,
  UNSPEC_VMULHSU = 71,
  UNSPEC_VADC = 72,
  UNSPEC_VSBC = 73,
  UNSPEC_VMADC = 74,
  UNSPEC_VMSBC = 75,
  UNSPEC_OVERFLOW = 76,
  UNSPEC_VNCLIP = 77,
  UNSPEC_VNCLIPU = 78,
  UNSPEC_VSSRL = 79,
  UNSPEC_VSSRA = 80,
  UNSPEC_VAADDU = 81,
  UNSPEC_VAADD = 82,
  UNSPEC_VASUBU = 83,
  UNSPEC_VASUB = 84,
  UNSPEC_VSMUL = 85,
  UNSPEC_VMSBF = 86,
  UNSPEC_VMSIF = 87,
  UNSPEC_VMSOF = 88,
  UNSPEC_VIOTA = 89,
  UNSPEC_VFRSQRT7 = 90,
  UNSPEC_VFREC7 = 91,
  UNSPEC_VFCLASS = 92,
  UNSPEC_VCOPYSIGN = 93,
  UNSPEC_VNCOPYSIGN = 94,
  UNSPEC_VXORSIGN = 95,
  UNSPEC_VFCVT = 96,
  UNSPEC_UNSIGNED_VFCVT = 97,
  UNSPEC_ROD = 98,
  UNSPEC_REDUC = 99,
  UNSPEC_WREDUC_SUM = 100,
  UNSPEC_WREDUC_USUM = 101,
  UNSPEC_VSLIDEUP = 102,
  UNSPEC_VSLIDEDOWN = 103,
  UNSPEC_VSLIDE1UP = 104,
  UNSPEC_VSLIDE1DOWN = 105,
  UNSPEC_VFSLIDE1UP = 106,
  UNSPEC_VFSLIDE1DOWN = 107,
  UNSPEC_VRGATHER = 108,
  UNSPEC_VRGATHEREI16 = 109,
  UNSPEC_VCOMPRESS = 110,
  UNSPEC_VLEFF = 111
};
#define NUM_UNSPEC_VALUES 112
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_GPR_SAVE = 0,
  UNSPECV_GPR_RESTORE = 1,
  UNSPECV_FRFLAGS = 2,
  UNSPECV_FSFLAGS = 3,
  UNSPECV_FSNVSNAN = 4,
  UNSPECV_MRET = 5,
  UNSPECV_SRET = 6,
  UNSPECV_URET = 7,
  UNSPECV_BLOCKAGE = 8,
  UNSPECV_FENCE = 9,
  UNSPECV_FENCE_I = 10,
  UNSPEC_SSP_SET = 11,
  UNSPEC_SSP_TEST = 12,
  UNSPECV_CLEAN = 13,
  UNSPECV_FLUSH = 14,
  UNSPECV_INVAL = 15,
  UNSPECV_ZERO = 16,
  UNSPECV_PREI = 17,
  UNSPECV_PAUSE = 18,
  UNSPEC_XTHEADFMV = 19,
  UNSPEC_XTHEADFMV_HW = 20
};
#define NUM_UNSPECV_VALUES 21
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
