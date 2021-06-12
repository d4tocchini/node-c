
/****************************************************************
*****************************************************************
THIS IS AN AUTO AMALGAMATED FILE
*****************************************************************
****************************************************************/



#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h> // size_t, malloc, posix_memalign
#include <stdbool.h>

#include "napi.h"
// #include "libtcc.h"

static const char casm_version[] = "v0.0.0";

static int module_init_count = 0;

#define CASM_DID_INIT (module_init_count > 0)


// #include "sx/allocator.h"
// static sx_alloc*    SX_ALLOCATOR = NULL;


// #include <sys/mman.h>
// #include <dlfcn.h>

#define DL_SYM_NAME_MAX_LEN     64
#define SYM_EXPORT(name)        (i64) &##name

static void* dl_main;

static void
_casm_init(napi_env env, napi_value exports)
{
    puts("casm init!");
    printf("\n\n    %lli    \n\n",&strcpy);
    ++module_init_count;
    JS_EXPORT_I32(module_init_count)
    // printf("\n\n%s\n\n",version);
    // JS_EXPORT_FN(copy_string)
    // JS_EXPORT_FN(tick)
    // JS_EXPORT_FN(cframe_apply)
    // JS_EXPORT_FN(cframe_return)
    // JS_EXPORT_FN(cframep_return)
    // // JS_EXPORT_FN(get_num)
    // // JS_EXPORT_FN_DEFS()
    // // NAPI_EXPORT_FUNCTION(call)
    // NAPI_EXPORT_UTF8(version, strlen(version))
    // NAPI_OK( napi_create_string_utf8(env, version, strlen(version), &version_napi) )
    // NAPI_OK( napi_set_named_property(env, exports, "version", version_napi) )
    // return exports;
    // test_call_to_js(env);
    // test_require_ptr(env);

    //  char str[] = "Hello\n";
    // write(0, str, 6);   // write() to STDIN
}

static void
_casm_cleanup()
{

}

NAPI_INIT()
{
    _casm_init(env, exports);
    napi_add_env_cleanup_hook(env, &_casm_cleanup, NULL);
}