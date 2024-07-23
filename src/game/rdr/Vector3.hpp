//#pragma once
//
//#ifdef __cplusplus
//	#include <ostream>
//	#include <sstream>
//#endif
//
//#ifdef __cplusplus
//extern "C"
//{
//#endif
//
//	// C-compatible struct
//	typedef struct Vector3_C
//	{
//		alignas(8) float x;
//		alignas(8) float y;
//		alignas(8) float z;
//	} Vector3_C;
//
//#ifdef __cplusplus
//}
//#endif
//
//#ifdef __cplusplus
//// Conversion functions (only available in C++)
//inline Vector3_C ToVector3_C(const Vector3& vec)
//{
//	return Vector3_C{vec.x, vec.y, vec.z};
//}
//
//inline Vector3 FromVector3_C(const Vector3_C& vec)
//{
//	return Vector3(vec.x, vec.y, vec.z);
//}
//#endif