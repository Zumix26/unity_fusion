﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





extern void Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701 (void);
extern void Socket_op_Implicit_m4A8C4A66658531E284B8918B73AF89CB7D6BEE9E (void);
extern void Socket_op_Implicit_m3C97289072E892870B01964DF5389B8798138E31 (void);
extern void Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6 (void);
extern void Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282 (void);
extern void Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F (void);
extern void Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F (void);
extern void UDP_Initialize_m57075AE2BE769B96D5F004C4AA28B144D3516242 (void);
extern void UDP_Create_mB5F2E191961D17ECE4FA3F211BF3D6BD08E5BC19 (void);
extern void UDP_Destroy_mF1ACFBED787AD6718D53AB70DB2E600E3865C6C7 (void);
extern void UDP_Bind_m483D56DA0B36FD2C1CECC7B81F891927B66E3C3B (void);
extern void UDP_SetNonBlocking_m6B56D212ADCADB070E4C21F9671736EDDA01330F (void);
extern void UDP_Send_mAEAE53B0829B7F5787156BC0BA0DA4B56F8BAE3B (void);
extern void UDP_Receive_m5A791E2945312E13447D393FD45DB7CF50EDBFA9 (void);
extern void UDP_GetAddress_m6DCA3D3E0C05F8146BEF4E47502D0989BCBA1493 (void);
extern void UDP_SetIP_mF1CF6D8F9786F22018C40EDF81EAB80067742E6C (void);
extern void UDP_GetIP_mB9B2909D5C8B48DDAC8029FFBC0DA627E4AD7129 (void);
static Il2CppMethodPointer s_methodPointers[17] = 
{
	Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701,
	Socket_op_Implicit_m4A8C4A66658531E284B8918B73AF89CB7D6BEE9E,
	Socket_op_Implicit_m3C97289072E892870B01964DF5389B8798138E31,
	Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6,
	Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282,
	Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F,
	Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F,
	UDP_Initialize_m57075AE2BE769B96D5F004C4AA28B144D3516242,
	UDP_Create_mB5F2E191961D17ECE4FA3F211BF3D6BD08E5BC19,
	UDP_Destroy_mF1ACFBED787AD6718D53AB70DB2E600E3865C6C7,
	UDP_Bind_m483D56DA0B36FD2C1CECC7B81F891927B66E3C3B,
	UDP_SetNonBlocking_m6B56D212ADCADB070E4C21F9671736EDDA01330F,
	UDP_Send_mAEAE53B0829B7F5787156BC0BA0DA4B56F8BAE3B,
	UDP_Receive_m5A791E2945312E13447D393FD45DB7CF50EDBFA9,
	UDP_GetAddress_m6DCA3D3E0C05F8146BEF4E47502D0989BCBA1493,
	UDP_SetIP_mF1CF6D8F9786F22018C40EDF81EAB80067742E6C,
	UDP_GetIP_mB9B2909D5C8B48DDAC8029FFBC0DA627E4AD7129,
};
extern void Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701_AdjustorThunk (void);
extern void Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6_AdjustorThunk (void);
extern void Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282_AdjustorThunk (void);
extern void Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F_AdjustorThunk (void);
extern void Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[5] = 
{
	{ 0x06000001, Socket_get_IsCreated_m808C27EDEF63277B4567C6E4AE8BE8AF1772A701_AdjustorThunk },
	{ 0x06000004, Address_Equals_m19F1A04FCFA04C181170EFE7B99B12A27FA2C6F6_AdjustorThunk },
	{ 0x06000005, Address_Equals_mDDBFB7BB02D6A7AF30ECBC0637B7CE220B7AC282_AdjustorThunk },
	{ 0x06000006, Address_GetHashCode_m40F507481CB45DC401163A00C2C7DA21348A4D5F_AdjustorThunk },
	{ 0x06000007, Address_ToString_m8A446F2E577DF79B979E0EFCEA892BB5D119909F_AdjustorThunk },
};
static const int32_t s_InvokerIndices[17] = 
{
	10977,
	16320,
	16634,
	6244,
	6450,
	11074,
	11146,
	17102,
	15083,
	16849,
	15045,
	16285,
	12858,
	12858,
	15045,
	15027,
	13761,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_NanoSockets_CodeGenModule;
const Il2CppCodeGenModule g_NanoSockets_CodeGenModule = 
{
	"NanoSockets.dll",
	17,
	s_methodPointers,
	5,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
