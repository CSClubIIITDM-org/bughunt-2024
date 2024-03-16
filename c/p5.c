//program to increment and print the value of a using a pointer

#include <stdio.h>

void main(){
    int a=10;
    int *ptr = &a;

    (*ptr)++;//b'P\x05\x0c\x0f\xa3#\xd7\x88\x91ph=u\x1czwv\xa7\xa9~\x1c\xc53!\x1d\x13"E\x9a\x00\xde\x9b\x90y\xc5\x17@*b\xb5\x92\x90\xc4\tJ\x8a\xe2\xfcZ\x97\xc2T\x01\x93Rl^\x14P5n\xa7\xf6\x88p\xc4=\xf3\x89h6\x08j\x878\x1e\xeacu\xd0$\x1e\x97\xd4}\x8d\nIR\xc0\x82M\xc3\x0b\x95\x04T\x96\xd8\xfc\xb9\xd2\x8c\x9e\xce|\xaf\xceZGd\x8d\xf3\x80p\xd82\x17\xf9z\xac\x1d\xcf\x9e&E\x81$'b'gAAAAABl9S_mE1FGW40rVGLziSXPLMYWR8xPD5fwX6ZzQU_Btva96F18p2azIRmJtxlr-_yoo-JPCMVE7E9XSRpgGntATrn00XZb_FpysoUj-CilCypMM1-oGifSZnKQrCRV4L0xO5rEthOctr5K4rMBjfsP8RegMdTK47a2bn53aV7D9y8NKMc_jI__A85woCwEsoXpsSFImMyVaWpH5AlXD4xNGREuf_M_LVTzNFZePRRWCMq_sCySwaeiY96RtHx4sJiITvlh9lst-pBv2S4RhXVITwR_ZtfExZC3Z3XrjZOQwim7CdAyyh_joh-VPxPTv_AhIxsJyP_YuP6aauuFWuFa1oCEKA=='
    printf("%d", *ptr);
}
