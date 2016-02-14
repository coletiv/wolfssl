/* Configuration */
#define IPHONE	/* Needed for Xcode */
#define OPENSSL_EXTRA
#define HAVE_HASHDRBG
#define HAVE_AESGCM
#define WOLFSSL_SHA512
#define WOLFSSL_SHA384
#define DEBUG_WOLFSSL
//#define NO_WOLFSSL_SERVER
#define SINGLE_THREADED

#define HAVE_ECC
#define WOLFSSL_STATIC_RSA

//#define NO_FILESYSTEM
#define USE_CERT_BUFFERS_1024
#define USE_CERT_BUFFERS_2048

#define DEBUG_WOLFSSL

#ifdef HAVE_FIPS
#define NO_MD4
#define NO_HC128
#define NO_RABBIT
#define NO_DSA
#define NO_PWDBASED
#else
#define USE_FAST_MATH
#endif
