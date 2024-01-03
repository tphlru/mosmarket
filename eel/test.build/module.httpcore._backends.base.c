/* Generated code for Python module 'httpcore$_backends$base'
 * created by Nuitka version 1.9.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_httpcore$_backends$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_backends$base;
PyDictObject *moduledict_httpcore$_backends$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[82];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[82];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("httpcore._backends.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 82; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_httpcore$_backends$base(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 82; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cd7d6bc64fd9a393158824dd57b897ed;
static PyCodeObject *codeobj_d29dcf9c6c1db383a12d49aee747d024;
static PyCodeObject *codeobj_782a70a409252f43dbd10ffa9d376d7c;
static PyCodeObject *codeobj_ec66d32c88e61730448b980f8ff88a00;
static PyCodeObject *codeobj_5d1ec6af4aa941314c2be26d8ecd9c87;
static PyCodeObject *codeobj_8f745d5b37074c8f59d9aa4817e151ff;
static PyCodeObject *codeobj_a44ab513c425181c7f15921ebadf3dce;
static PyCodeObject *codeobj_437f97c45dba97eea73ebf1278dfa112;
static PyCodeObject *codeobj_d222bed7f88be1c6625f037793a94518;
static PyCodeObject *codeobj_5bd9f84fd8d764eb77e56de88a3ce84b;
static PyCodeObject *codeobj_27988b51e3d35852e1e8ce56be621338;
static PyCodeObject *codeobj_dd5490ce9d0eb058ccca82c0a82ab891;
static PyCodeObject *codeobj_1e470ccba03166f8cc1773099012cd3f;
static PyCodeObject *codeobj_07f5326894a5238372b5e0c0c50e4028;
static PyCodeObject *codeobj_f81ba31dd74f59215bd8fd65771acfe6;
static PyCodeObject *codeobj_4d371bd3842aebf6a0a524d3324da334;
static PyCodeObject *codeobj_b21f8fb6107632c52469e6512b27cad3;
static PyCodeObject *codeobj_d5b998a1048abe5c622eb1f0b07e60ef;
static PyCodeObject *codeobj_fa7f2c8840d1055d01a16599cfd02a34;
static PyCodeObject *codeobj_36259c66bd442747640a0689353f31b2;
static PyCodeObject *codeobj_40ad6e0df93381a841823c275ffbfd80;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[70]); CHECK_OBJECT(module_filename_obj);
    codeobj_cd7d6bc64fd9a393158824dd57b897ed = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[71], mod_consts[71], NULL, NULL, 0, 0, 0);
    codeobj_d29dcf9c6c1db383a12d49aee747d024 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[72], NULL, 0, 0, 0);
    codeobj_782a70a409252f43dbd10ffa9d376d7c = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[72], NULL, 0, 0, 0);
    codeobj_ec66d32c88e61730448b980f8ff88a00 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[72], NULL, 0, 0, 0);
    codeobj_5d1ec6af4aa941314c2be26d8ecd9c87 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[72], NULL, 0, 0, 0);
    codeobj_8f745d5b37074c8f59d9aa4817e151ff = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[73], NULL, 1, 0, 0);
    codeobj_a44ab513c425181c7f15921ebadf3dce = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[73], NULL, 1, 0, 0);
    codeobj_437f97c45dba97eea73ebf1278dfa112 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[74], NULL, 6, 0, 0);
    codeobj_d222bed7f88be1c6625f037793a94518 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[74], NULL, 6, 0, 0);
    codeobj_5bd9f84fd8d764eb77e56de88a3ce84b = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[75], NULL, 4, 0, 0);
    codeobj_27988b51e3d35852e1e8ce56be621338 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[75], NULL, 4, 0, 0);
    codeobj_dd5490ce9d0eb058ccca82c0a82ab891 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[76], NULL, 2, 0, 0);
    codeobj_1e470ccba03166f8cc1773099012cd3f = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[76], NULL, 2, 0, 0);
    codeobj_07f5326894a5238372b5e0c0c50e4028 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[77], NULL, 3, 0, 0);
    codeobj_f81ba31dd74f59215bd8fd65771acfe6 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[77], NULL, 3, 0, 0);
    codeobj_4d371bd3842aebf6a0a524d3324da334 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[78], NULL, 2, 0, 0);
    codeobj_b21f8fb6107632c52469e6512b27cad3 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[78], NULL, 2, 0, 0);
    codeobj_d5b998a1048abe5c622eb1f0b07e60ef = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[79], NULL, 4, 0, 0);
    codeobj_fa7f2c8840d1055d01a16599cfd02a34 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[79], NULL, 4, 0, 0);
    codeobj_36259c66bd442747640a0689353f31b2 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[80], NULL, 3, 0, 0);
    codeobj_40ad6e0df93381a841823c275ffbfd80 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[80], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__9_read$$$coroutine__1_read(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__10_write$$$coroutine__1_write(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__10_write(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__11_aclose(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__12_start_tls(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__13_get_extra_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__14_connect_tcp(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__15_connect_unix_socket(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__16_sleep(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__1_read(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__2_write(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__3_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__4_start_tls(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__5_get_extra_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__6_connect_tcp(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__7_connect_unix_socket(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__8_sleep(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__9_read(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_backends$base$$$function__1_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_max_bytes = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    struct Nuitka_FrameObject *frame_f81ba31dd74f59215bd8fd65771acfe6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f81ba31dd74f59215bd8fd65771acfe6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f81ba31dd74f59215bd8fd65771acfe6)) {
        Py_XDECREF(cache_frame_f81ba31dd74f59215bd8fd65771acfe6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f81ba31dd74f59215bd8fd65771acfe6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f81ba31dd74f59215bd8fd65771acfe6 = MAKE_FUNCTION_FRAME(tstate, codeobj_f81ba31dd74f59215bd8fd65771acfe6, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f81ba31dd74f59215bd8fd65771acfe6->m_type_description == NULL);
    frame_f81ba31dd74f59215bd8fd65771acfe6 = cache_frame_f81ba31dd74f59215bd8fd65771acfe6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f81ba31dd74f59215bd8fd65771acfe6);
    assert(Py_REFCNT(frame_f81ba31dd74f59215bd8fd65771acfe6) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_f81ba31dd74f59215bd8fd65771acfe6->m_frame.f_lineno = 14;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f81ba31dd74f59215bd8fd65771acfe6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f81ba31dd74f59215bd8fd65771acfe6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f81ba31dd74f59215bd8fd65771acfe6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f81ba31dd74f59215bd8fd65771acfe6,
        type_description_1,
        par_self,
        par_max_bytes,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_f81ba31dd74f59215bd8fd65771acfe6 == cache_frame_f81ba31dd74f59215bd8fd65771acfe6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f81ba31dd74f59215bd8fd65771acfe6);
        cache_frame_f81ba31dd74f59215bd8fd65771acfe6 = NULL;
    }

    assertFrameObject(frame_f81ba31dd74f59215bd8fd65771acfe6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_max_bytes);
    Py_DECREF(par_max_bytes);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$_backends$base$$$function__2_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buffer = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    struct Nuitka_FrameObject *frame_40ad6e0df93381a841823c275ffbfd80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_40ad6e0df93381a841823c275ffbfd80 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_40ad6e0df93381a841823c275ffbfd80)) {
        Py_XDECREF(cache_frame_40ad6e0df93381a841823c275ffbfd80);

#if _DEBUG_REFCOUNTS
        if (cache_frame_40ad6e0df93381a841823c275ffbfd80 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_40ad6e0df93381a841823c275ffbfd80 = MAKE_FUNCTION_FRAME(tstate, codeobj_40ad6e0df93381a841823c275ffbfd80, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_40ad6e0df93381a841823c275ffbfd80->m_type_description == NULL);
    frame_40ad6e0df93381a841823c275ffbfd80 = cache_frame_40ad6e0df93381a841823c275ffbfd80;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_40ad6e0df93381a841823c275ffbfd80);
    assert(Py_REFCNT(frame_40ad6e0df93381a841823c275ffbfd80) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_40ad6e0df93381a841823c275ffbfd80->m_frame.f_lineno = 17;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 17;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_40ad6e0df93381a841823c275ffbfd80, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_40ad6e0df93381a841823c275ffbfd80->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40ad6e0df93381a841823c275ffbfd80, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_40ad6e0df93381a841823c275ffbfd80,
        type_description_1,
        par_self,
        par_buffer,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_40ad6e0df93381a841823c275ffbfd80 == cache_frame_40ad6e0df93381a841823c275ffbfd80) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_40ad6e0df93381a841823c275ffbfd80);
        cache_frame_40ad6e0df93381a841823c275ffbfd80 = NULL;
    }

    assertFrameObject(frame_40ad6e0df93381a841823c275ffbfd80);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$_backends$base$$$function__3_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a44ab513c425181c7f15921ebadf3dce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a44ab513c425181c7f15921ebadf3dce = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a44ab513c425181c7f15921ebadf3dce)) {
        Py_XDECREF(cache_frame_a44ab513c425181c7f15921ebadf3dce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a44ab513c425181c7f15921ebadf3dce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a44ab513c425181c7f15921ebadf3dce = MAKE_FUNCTION_FRAME(tstate, codeobj_a44ab513c425181c7f15921ebadf3dce, module_httpcore$_backends$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a44ab513c425181c7f15921ebadf3dce->m_type_description == NULL);
    frame_a44ab513c425181c7f15921ebadf3dce = cache_frame_a44ab513c425181c7f15921ebadf3dce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a44ab513c425181c7f15921ebadf3dce);
    assert(Py_REFCNT(frame_a44ab513c425181c7f15921ebadf3dce) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_a44ab513c425181c7f15921ebadf3dce->m_frame.f_lineno = 20;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 20;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a44ab513c425181c7f15921ebadf3dce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a44ab513c425181c7f15921ebadf3dce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a44ab513c425181c7f15921ebadf3dce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a44ab513c425181c7f15921ebadf3dce,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a44ab513c425181c7f15921ebadf3dce == cache_frame_a44ab513c425181c7f15921ebadf3dce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a44ab513c425181c7f15921ebadf3dce);
        cache_frame_a44ab513c425181c7f15921ebadf3dce = NULL;
    }

    assertFrameObject(frame_a44ab513c425181c7f15921ebadf3dce);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$_backends$base$$$function__4_start_tls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ssl_context = python_pars[1];
    PyObject *par_server_hostname = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    struct Nuitka_FrameObject *frame_fa7f2c8840d1055d01a16599cfd02a34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa7f2c8840d1055d01a16599cfd02a34 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa7f2c8840d1055d01a16599cfd02a34)) {
        Py_XDECREF(cache_frame_fa7f2c8840d1055d01a16599cfd02a34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa7f2c8840d1055d01a16599cfd02a34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa7f2c8840d1055d01a16599cfd02a34 = MAKE_FUNCTION_FRAME(tstate, codeobj_fa7f2c8840d1055d01a16599cfd02a34, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa7f2c8840d1055d01a16599cfd02a34->m_type_description == NULL);
    frame_fa7f2c8840d1055d01a16599cfd02a34 = cache_frame_fa7f2c8840d1055d01a16599cfd02a34;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fa7f2c8840d1055d01a16599cfd02a34);
    assert(Py_REFCNT(frame_fa7f2c8840d1055d01a16599cfd02a34) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_fa7f2c8840d1055d01a16599cfd02a34->m_frame.f_lineno = 28;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 28;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa7f2c8840d1055d01a16599cfd02a34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa7f2c8840d1055d01a16599cfd02a34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa7f2c8840d1055d01a16599cfd02a34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa7f2c8840d1055d01a16599cfd02a34,
        type_description_1,
        par_self,
        par_ssl_context,
        par_server_hostname,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_fa7f2c8840d1055d01a16599cfd02a34 == cache_frame_fa7f2c8840d1055d01a16599cfd02a34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa7f2c8840d1055d01a16599cfd02a34);
        cache_frame_fa7f2c8840d1055d01a16599cfd02a34 = NULL;
    }

    assertFrameObject(frame_fa7f2c8840d1055d01a16599cfd02a34);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_server_hostname);
    Py_DECREF(par_server_hostname);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$_backends$base$$$function__6_connect_tcp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *par_local_address = python_pars[4];
    PyObject *par_socket_options = python_pars[5];
    struct Nuitka_FrameObject *frame_d222bed7f88be1c6625f037793a94518;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d222bed7f88be1c6625f037793a94518 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d222bed7f88be1c6625f037793a94518)) {
        Py_XDECREF(cache_frame_d222bed7f88be1c6625f037793a94518);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d222bed7f88be1c6625f037793a94518 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d222bed7f88be1c6625f037793a94518 = MAKE_FUNCTION_FRAME(tstate, codeobj_d222bed7f88be1c6625f037793a94518, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d222bed7f88be1c6625f037793a94518->m_type_description == NULL);
    frame_d222bed7f88be1c6625f037793a94518 = cache_frame_d222bed7f88be1c6625f037793a94518;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d222bed7f88be1c6625f037793a94518);
    assert(Py_REFCNT(frame_d222bed7f88be1c6625f037793a94518) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_d222bed7f88be1c6625f037793a94518->m_frame.f_lineno = 43;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 43;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d222bed7f88be1c6625f037793a94518, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d222bed7f88be1c6625f037793a94518->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d222bed7f88be1c6625f037793a94518, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d222bed7f88be1c6625f037793a94518,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_timeout,
        par_local_address,
        par_socket_options
    );


    // Release cached frame if used for exception.
    if (frame_d222bed7f88be1c6625f037793a94518 == cache_frame_d222bed7f88be1c6625f037793a94518) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d222bed7f88be1c6625f037793a94518);
        cache_frame_d222bed7f88be1c6625f037793a94518 = NULL;
    }

    assertFrameObject(frame_d222bed7f88be1c6625f037793a94518);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);
    CHECK_OBJECT(par_socket_options);
    Py_DECREF(par_socket_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$_backends$base$$$function__7_connect_unix_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    PyObject *par_socket_options = python_pars[3];
    struct Nuitka_FrameObject *frame_27988b51e3d35852e1e8ce56be621338;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_27988b51e3d35852e1e8ce56be621338 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_27988b51e3d35852e1e8ce56be621338)) {
        Py_XDECREF(cache_frame_27988b51e3d35852e1e8ce56be621338);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27988b51e3d35852e1e8ce56be621338 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27988b51e3d35852e1e8ce56be621338 = MAKE_FUNCTION_FRAME(tstate, codeobj_27988b51e3d35852e1e8ce56be621338, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27988b51e3d35852e1e8ce56be621338->m_type_description == NULL);
    frame_27988b51e3d35852e1e8ce56be621338 = cache_frame_27988b51e3d35852e1e8ce56be621338;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_27988b51e3d35852e1e8ce56be621338);
    assert(Py_REFCNT(frame_27988b51e3d35852e1e8ce56be621338) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_27988b51e3d35852e1e8ce56be621338->m_frame.f_lineno = 51;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27988b51e3d35852e1e8ce56be621338, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27988b51e3d35852e1e8ce56be621338->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27988b51e3d35852e1e8ce56be621338, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27988b51e3d35852e1e8ce56be621338,
        type_description_1,
        par_self,
        par_path,
        par_timeout,
        par_socket_options
    );


    // Release cached frame if used for exception.
    if (frame_27988b51e3d35852e1e8ce56be621338 == cache_frame_27988b51e3d35852e1e8ce56be621338) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27988b51e3d35852e1e8ce56be621338);
        cache_frame_27988b51e3d35852e1e8ce56be621338 = NULL;
    }

    assertFrameObject(frame_27988b51e3d35852e1e8ce56be621338);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_socket_options);
    Py_DECREF(par_socket_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$_backends$base$$$function__8_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    struct Nuitka_FrameObject *frame_b21f8fb6107632c52469e6512b27cad3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b21f8fb6107632c52469e6512b27cad3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b21f8fb6107632c52469e6512b27cad3)) {
        Py_XDECREF(cache_frame_b21f8fb6107632c52469e6512b27cad3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b21f8fb6107632c52469e6512b27cad3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b21f8fb6107632c52469e6512b27cad3 = MAKE_FUNCTION_FRAME(tstate, codeobj_b21f8fb6107632c52469e6512b27cad3, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b21f8fb6107632c52469e6512b27cad3->m_type_description == NULL);
    frame_b21f8fb6107632c52469e6512b27cad3 = cache_frame_b21f8fb6107632c52469e6512b27cad3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b21f8fb6107632c52469e6512b27cad3);
    assert(Py_REFCNT(frame_b21f8fb6107632c52469e6512b27cad3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_seconds);
        tmp_args_element_value_1 = par_seconds;
        frame_b21f8fb6107632c52469e6512b27cad3->m_frame.f_lineno = 54;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b21f8fb6107632c52469e6512b27cad3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b21f8fb6107632c52469e6512b27cad3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b21f8fb6107632c52469e6512b27cad3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b21f8fb6107632c52469e6512b27cad3,
        type_description_1,
        par_self,
        par_seconds
    );


    // Release cached frame if used for exception.
    if (frame_b21f8fb6107632c52469e6512b27cad3 == cache_frame_b21f8fb6107632c52469e6512b27cad3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b21f8fb6107632c52469e6512b27cad3);
        cache_frame_b21f8fb6107632c52469e6512b27cad3 = NULL;
    }

    assertFrameObject(frame_b21f8fb6107632c52469e6512b27cad3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpcore$_backends$base$$$function__9_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_max_bytes = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$_backends$base$$$function__9_read$$$coroutine__1_read(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_max_bytes);
    Py_DECREF(par_max_bytes);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpcore$_backends$base$$$function__9_read$$$coroutine__1_read_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$_backends$base$$$function__9_read$$$coroutine__1_read_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_backends$base$$$function__9_read$$$coroutine__1_read_locals *coroutine_heap = (struct httpcore$_backends$base$$$function__9_read$$$coroutine__1_read_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_07f5326894a5238372b5e0c0c50e4028, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 61;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 61;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNN";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            NULL,
            NULL,
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__9_read$$$coroutine__1_read(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_backends$base$$$function__9_read$$$coroutine__1_read_context,
        module_httpcore$_backends$base,
        mod_consts[2],
        mod_consts[3],
        codeobj_07f5326894a5238372b5e0c0c50e4028,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$_backends$base$$$function__9_read$$$coroutine__1_read_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_backends$base$$$function__10_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buffer = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$_backends$base$$$function__10_write$$$coroutine__1_write(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpcore$_backends$base$$$function__10_write$$$coroutine__1_write_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$_backends$base$$$function__10_write$$$coroutine__1_write_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_backends$base$$$function__10_write$$$coroutine__1_write_locals *coroutine_heap = (struct httpcore$_backends$base$$$function__10_write$$$coroutine__1_write_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_36259c66bd442747640a0689353f31b2, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 66;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 66;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNN";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            NULL,
            NULL,
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__10_write$$$coroutine__1_write(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_backends$base$$$function__10_write$$$coroutine__1_write_context,
        module_httpcore$_backends$base,
        mod_consts[4],
        mod_consts[5],
        codeobj_36259c66bd442747640a0689353f31b2,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$_backends$base$$$function__10_write$$$coroutine__1_write_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_backends$base$$$function__11_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_8f745d5b37074c8f59d9aa4817e151ff, module_httpcore$_backends$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 69;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 69;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "N";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose_context,
        module_httpcore$_backends$base,
        mod_consts[6],
        mod_consts[7],
        codeobj_8f745d5b37074c8f59d9aa4817e151ff,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$_backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_backends$base$$$function__12_start_tls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ssl_context = python_pars[1];
    PyObject *par_server_hostname = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_server_hostname);
    Py_DECREF(par_server_hostname);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals *coroutine_heap = (struct httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_d5b998a1048abe5c622eb1f0b07e60ef, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 77;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 77;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNNN";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            NULL,
            NULL,
            NULL,
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_context,
        module_httpcore$_backends$base,
        mod_consts[8],
        mod_consts[9],
        codeobj_d5b998a1048abe5c622eb1f0b07e60ef,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$_backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_backends$base$$$function__14_connect_tcp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *par_local_address = python_pars[4];
    PyObject *par_socket_options = python_pars[5];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);
    CHECK_OBJECT(par_socket_options);
    Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_437f97c45dba97eea73ebf1278dfa112, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 92;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 92;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNNNNN";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_httpcore$_backends$base,
        mod_consts[10],
        mod_consts[11],
        codeobj_437f97c45dba97eea73ebf1278dfa112,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$_backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_backends$base$$$function__15_connect_unix_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    PyObject *par_socket_options = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_socket_options);
    Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals *coroutine_heap = (struct httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_5bd9f84fd8d764eb77e56de88a3ce84b, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 100;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 100;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNNN";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            NULL,
            NULL,
            NULL,
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_context,
        module_httpcore$_backends$base,
        mod_consts[12],
        mod_consts[13],
        codeobj_5bd9f84fd8d764eb77e56de88a3ce84b,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$_backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_backends$base$$$function__16_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals *coroutine_heap = (struct httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_4d371bd3842aebf6a0a524d3324da334, module_httpcore$_backends$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 103;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 103;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NN";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            NULL,
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep_context,
        module_httpcore$_backends$base,
        mod_consts[1],
        mod_consts[14],
        codeobj_4d371bd3842aebf6a0a524d3324da334,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$_backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__10_write(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__10_write,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[5],
#endif
        codeobj_36259c66bd442747640a0689353f31b2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__11_aclose(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__11_aclose,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_8f745d5b37074c8f59d9aa4817e151ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__12_start_tls(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__12_start_tls,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_d5b998a1048abe5c622eb1f0b07e60ef,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__13_get_extra_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_1e470ccba03166f8cc1773099012cd3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__14_connect_tcp(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__14_connect_tcp,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[11],
#endif
        codeobj_437f97c45dba97eea73ebf1278dfa112,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__15_connect_unix_socket(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__15_connect_unix_socket,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_5bd9f84fd8d764eb77e56de88a3ce84b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__16_sleep(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__16_sleep,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_4d371bd3842aebf6a0a524d3324da334,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__1_read(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__1_read,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_f81ba31dd74f59215bd8fd65771acfe6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__2_write(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__2_write,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_40ad6e0df93381a841823c275ffbfd80,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__3_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__3_close,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_a44ab513c425181c7f15921ebadf3dce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__4_start_tls(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__4_start_tls,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_fa7f2c8840d1055d01a16599cfd02a34,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__5_get_extra_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_dd5490ce9d0eb058ccca82c0a82ab891,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__6_connect_tcp(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__6_connect_tcp,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_d222bed7f88be1c6625f037793a94518,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__7_connect_unix_socket(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__7_connect_unix_socket,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_27988b51e3d35852e1e8ce56be621338,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__8_sleep(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__8_sleep,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_b21f8fb6107632c52469e6512b27cad3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_backends$base$$$function__9_read(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_backends$base$$$function__9_read,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_07f5326894a5238372b5e0c0c50e4028,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_httpcore$_backends$base[] = {
    impl_httpcore$_backends$base$$$function__1_read,
    impl_httpcore$_backends$base$$$function__2_write,
    impl_httpcore$_backends$base$$$function__3_close,
    impl_httpcore$_backends$base$$$function__4_start_tls,
    impl_httpcore$_backends$base$$$function__6_connect_tcp,
    impl_httpcore$_backends$base$$$function__7_connect_unix_socket,
    impl_httpcore$_backends$base$$$function__8_sleep,
    impl_httpcore$_backends$base$$$function__9_read,
    impl_httpcore$_backends$base$$$function__10_write,
    impl_httpcore$_backends$base$$$function__11_aclose,
    impl_httpcore$_backends$base$$$function__12_start_tls,
    impl_httpcore$_backends$base$$$function__14_connect_tcp,
    impl_httpcore$_backends$base$$$function__15_connect_unix_socket,
    impl_httpcore$_backends$base$$$function__16_sleep,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_httpcore$_backends$base);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_httpcore$_backends$base,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_httpcore$_backends$base,
        sizeof(function_table_httpcore$_backends$base) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_httpcore$_backends$base(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore$_backends$base");

    // Store the module for future use.
    module_httpcore$_backends$base = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore$_backends$base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpcore$_backends$base: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpcore$_backends$base\n");

    moduledict_httpcore$_backends$base = MODULE_DICT(module_httpcore$_backends$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_backends$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_backends$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[81]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_backends$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_backends$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_backends$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_backends$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpcore$_backends$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    struct Nuitka_FrameObject *frame_cd7d6bc64fd9a393158824dd57b897ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_httpcore$_backends$base$$$class__1_NetworkStream_12 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_5d1ec6af4aa941314c2be26d8ecd9c87_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_httpcore$_backends$base$$$class__2_NetworkBackend_34 = NULL;
    struct Nuitka_FrameObject *frame_ec66d32c88e61730448b980f8ff88a00_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57 = NULL;
    struct Nuitka_FrameObject *frame_782a70a409252f43dbd10ffa9d376d7c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83 = NULL;
    struct Nuitka_FrameObject *frame_d29dcf9c6c1db383a12d49aee747d024_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_2);
    }
    frame_cd7d6bc64fd9a393158824dd57b897ed = MAKE_MODULE_FRAME(codeobj_cd7d6bc64fd9a393158824dd57b897ed, module_httpcore$_backends$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cd7d6bc64fd9a393158824dd57b897ed);
    assert(Py_REFCNT(frame_cd7d6bc64fd9a393158824dd57b897ed) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_backends$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[22];
        frame_cd7d6bc64fd9a393158824dd57b897ed->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[0];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_backends$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[22];
        frame_cd7d6bc64fd9a393158824dd57b897ed->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[26];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_5;
            PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            assert(!(tmp_expression_value_6 == NULL));
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
            tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
                tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_8 == NULL));
                tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[24]);
                if (tmp_expression_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 7;

                    goto tuple_build_exception_2;
                }
                tmp_subscript_value_4 = mod_consts[27];
                tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_7);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 7;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_3, 2, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_expression_value_5);
            Py_DECREF(tmp_subscript_value_3);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_5);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[25]);
            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_5 = mod_consts[28];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpcore$_backends$base$$$class__1_NetworkStream_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__1_NetworkStream_12, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[32];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__1_NetworkStream_12, mod_consts[33], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_5d1ec6af4aa941314c2be26d8ecd9c87_2 = MAKE_CLASS_FRAME(tstate, codeobj_5d1ec6af4aa941314c2be26d8ecd9c87, module_httpcore$_backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5d1ec6af4aa941314c2be26d8ecd9c87_2);
        assert(Py_REFCNT(frame_5d1ec6af4aa941314c2be26d8ecd9c87_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_defaults_1 = mod_consts[34];
            tmp_dict_key_1 = mod_consts[35];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_annotations_1 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_11;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_6;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[36];
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_12 == NULL));
                tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[37]);
                if (tmp_expression_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_6 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[38];
                tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__1_read(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__1_NetworkStream_12, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_defaults_2 = mod_consts[34];
            tmp_dict_key_2 = mod_consts[40];
            tmp_dict_value_2 = (PyObject *)&PyBytes_Type;
            tmp_annotations_2 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_7;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[36];
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_14 == NULL));
                tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[37]);
                if (tmp_expression_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_7 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[38];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__2_write(tmp_defaults_2, tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__1_NetworkStream_12, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[42]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__3_close(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__1_NetworkStream_12, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_15;
            tmp_defaults_3 = mod_consts[45];
            tmp_dict_key_3 = mod_consts[46];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[47]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_16;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[48];
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_17 == NULL));
                tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[37]);
                if (tmp_expression_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_dict_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[36];
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_19 == NULL));
                tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[37]);
                if (tmp_expression_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_9 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_dict_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[38];
                tmp_dict_value_3 = mod_consts[32];
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__4_start_tls(tmp_defaults_3, tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__1_NetworkStream_12, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[50];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_20;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[38];
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_20 == NULL));
                tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[51]);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__5_get_extra_info(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__1_NetworkStream_12, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d1ec6af4aa941314c2be26d8ecd9c87_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d1ec6af4aa941314c2be26d8ecd9c87_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d1ec6af4aa941314c2be26d8ecd9c87_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d1ec6af4aa941314c2be26d8ecd9c87_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_5d1ec6af4aa941314c2be26d8ecd9c87_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[32];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_httpcore$_backends$base$$$class__1_NetworkStream_12;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_cd7d6bc64fd9a393158824dd57b897ed->m_frame.f_lineno = 12;
            tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_httpcore$_backends$base$$$class__1_NetworkStream_12);
        locals_httpcore$_backends$base$$$class__1_NetworkStream_12 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_backends$base$$$class__1_NetworkStream_12);
        locals_httpcore$_backends$base$$$class__1_NetworkStream_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_10);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpcore$_backends$base$$$class__2_NetworkBackend_34 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__2_NetworkBackend_34, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__2_NetworkBackend_34, mod_consts[33], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ec66d32c88e61730448b980f8ff88a00_3 = MAKE_CLASS_FRAME(tstate, codeobj_ec66d32c88e61730448b980f8ff88a00, module_httpcore$_backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ec66d32c88e61730448b980f8ff88a00_3);
        assert(Py_REFCNT(frame_ec66d32c88e61730448b980f8ff88a00_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_defaults_4 = mod_consts[56];
            tmp_dict_key_5 = mod_consts[57];
            tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_6 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_21;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[58];
                tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[36];
                tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_22 == NULL)) {
                    tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_22 == NULL));
                tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[37]);
                if (tmp_expression_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_10 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_21);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[59];
                tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_24 == NULL)) {
                    tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_24 == NULL));
                tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[37]);
                if (tmp_expression_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[60];
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_26 == NULL));
                tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[37]);
                if (tmp_expression_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_28 == NULL));
                tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[61]);
                if (tmp_expression_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_25);

                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[29]);

                if (unlikely(tmp_subscript_value_13 == NULL)) {
                    tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                }

                if (tmp_subscript_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_25);
                    Py_DECREF(tmp_expression_value_27);

                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_subscript_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_25);

                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[38];
                tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_dict_value_5 == NULL)) {
                    tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__6_connect_tcp(tmp_defaults_4, tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__2_NetworkBackend_34, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_defaults_5 = mod_consts[45];
            tmp_dict_key_6 = mod_consts[63];
            tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_7 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_29;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_16;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[36];
                tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_30 == NULL)) {
                    tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_30 == NULL));
                tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[37]);
                if (tmp_expression_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_14 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[60];
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_32 == NULL));
                tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[37]);
                if (tmp_expression_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_34 == NULL));
                tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[61]);
                if (tmp_expression_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_31);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[29]);

                if (unlikely(tmp_subscript_value_16 == NULL)) {
                    tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                }

                if (tmp_subscript_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_31);
                    Py_DECREF(tmp_expression_value_33);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_33);
                if (tmp_subscript_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_31);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[38];
                tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_dict_value_6 == NULL)) {
                    tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__7_connect_unix_socket(tmp_defaults_5, tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__2_NetworkBackend_34, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ec66d32c88e61730448b980f8ff88a00_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ec66d32c88e61730448b980f8ff88a00_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ec66d32c88e61730448b980f8ff88a00_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ec66d32c88e61730448b980f8ff88a00_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ec66d32c88e61730448b980f8ff88a00_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[65]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__8_sleep(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__2_NetworkBackend_34, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[55];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_httpcore$_backends$base$$$class__2_NetworkBackend_34;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_cd7d6bc64fd9a393158824dd57b897ed->m_frame.f_lineno = 34;
            tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_14 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_httpcore$_backends$base$$$class__2_NetworkBackend_34);
        locals_httpcore$_backends$base$$$class__2_NetworkBackend_34 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_backends$base$$$class__2_NetworkBackend_34);
        locals_httpcore$_backends$base$$$class__2_NetworkBackend_34 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 34;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_14);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57, mod_consts[33], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_782a70a409252f43dbd10ffa9d376d7c_4 = MAKE_CLASS_FRAME(tstate, codeobj_782a70a409252f43dbd10ffa9d376d7c, module_httpcore$_backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_782a70a409252f43dbd10ffa9d376d7c_4);
        assert(Py_REFCNT(frame_782a70a409252f43dbd10ffa9d376d7c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_defaults_6 = mod_consts[34];
            tmp_dict_key_7 = mod_consts[35];
            tmp_dict_value_7 = (PyObject *)&PyLong_Type;
            tmp_annotations_9 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_35;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_17;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[36];
                tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_36 == NULL)) {
                    tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_36 == NULL));
                tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[37]);
                if (tmp_expression_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_subscript_value_17 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_35);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[38];
                tmp_dict_value_7 = (PyObject *)&PyBytes_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__9_read(tmp_defaults_6, tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_defaults_7 = mod_consts[34];
            tmp_dict_key_8 = mod_consts[40];
            tmp_dict_value_8 = (PyObject *)&PyBytes_Type;
            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_18;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[36];
                tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_38 == NULL)) {
                    tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_38 == NULL));
                tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[37]);
                if (tmp_expression_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_subscript_value_18 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_37);
                if (tmp_dict_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[38];
                tmp_dict_value_8 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__10_write(tmp_defaults_7, tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(mod_consts[42]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__11_aclose(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_39;
            tmp_defaults_8 = mod_consts[45];
            tmp_dict_key_9 = mod_consts[46];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[47]);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_40;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_20;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[48];
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_41 == NULL));
                tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[37]);
                if (tmp_expression_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_40);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[36];
                tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_43 == NULL)) {
                    tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_43 == NULL));
                tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[37]);
                if (tmp_expression_value_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_subscript_value_20 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_42);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[38];
                tmp_dict_value_9 = mod_consts[67];
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_12);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__12_start_tls(tmp_defaults_8, tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[50];
            tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_13 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_44;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[38];
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_44 == NULL));
                tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[51]);
                if (tmp_dict_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__13_get_extra_info(tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_782a70a409252f43dbd10ffa9d376d7c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_782a70a409252f43dbd10ffa9d376d7c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_782a70a409252f43dbd10ffa9d376d7c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_782a70a409252f43dbd10ffa9d376d7c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_782a70a409252f43dbd10ffa9d376d7c_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[67];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_cd7d6bc64fd9a393158824dd57b897ed->m_frame.f_lineno = 57;
            tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_18 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57);
        locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57);
        locals_httpcore$_backends$base$$$class__3_AsyncNetworkStream_57 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 57;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_18);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83, mod_consts[33], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_d29dcf9c6c1db383a12d49aee747d024_5 = MAKE_CLASS_FRAME(tstate, codeobj_d29dcf9c6c1db383a12d49aee747d024, module_httpcore$_backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d29dcf9c6c1db383a12d49aee747d024_5);
        assert(Py_REFCNT(frame_d29dcf9c6c1db383a12d49aee747d024_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_defaults_9 = mod_consts[56];
            tmp_dict_key_11 = mod_consts[57];
            tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_14 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_45;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_51;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_subscript_value_24;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[58];
                tmp_dict_value_11 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[36];
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_46 == NULL));
                tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[37]);
                if (tmp_expression_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_21 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_45);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[59];
                tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_48 == NULL)) {
                    tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_48 == NULL));
                tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[37]);
                if (tmp_expression_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_47);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[60];
                tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_50 == NULL)) {
                    tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_50 == NULL));
                tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[37]);
                if (tmp_expression_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_52 == NULL)) {
                    tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_52 == NULL));
                tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[61]);
                if (tmp_expression_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_49);

                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[29]);

                if (unlikely(tmp_subscript_value_24 == NULL)) {
                    tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                }

                if (tmp_subscript_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_49);
                    Py_DECREF(tmp_expression_value_51);

                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_51);
                if (tmp_subscript_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_49);

                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[38];
                tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[67]);

                if (unlikely(tmp_dict_value_11 == NULL)) {
                    tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                }

                if (tmp_dict_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__14_connect_tcp(tmp_defaults_9, tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_10;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_defaults_10 = mod_consts[45];
            tmp_dict_key_12 = mod_consts[63];
            tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_15 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_57;
                PyObject *tmp_expression_value_58;
                PyObject *tmp_subscript_value_27;
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[36];
                tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_54 == NULL)) {
                    tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_54 == NULL));
                tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[37]);
                if (tmp_expression_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_subscript_value_25 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_53);
                if (tmp_dict_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[60];
                tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_56 == NULL)) {
                    tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_56 == NULL));
                tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[37]);
                if (tmp_expression_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_58 == NULL)) {
                    tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_58 == NULL));
                tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[61]);
                if (tmp_expression_value_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_55);

                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[29]);

                if (unlikely(tmp_subscript_value_27 == NULL)) {
                    tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                }

                if (tmp_subscript_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_55);
                    Py_DECREF(tmp_expression_value_57);

                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_57);
                if (tmp_subscript_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_55);

                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_55);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[38];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[67]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_annotations_15);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__15_connect_unix_socket(tmp_defaults_10, tmp_annotations_15);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d29dcf9c6c1db383a12d49aee747d024_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d29dcf9c6c1db383a12d49aee747d024_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d29dcf9c6c1db383a12d49aee747d024_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d29dcf9c6c1db383a12d49aee747d024_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_d29dcf9c6c1db383a12d49aee747d024_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[65]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_backends$base$$$function__16_sleep(tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[69];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
            frame_cd7d6bc64fd9a393158824dd57b897ed->m_frame.f_lineno = 83;
            tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_22 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83);
        locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83);
        locals_httpcore$_backends$base$$$class__4_AsyncNetworkBackend_83 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 83;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_22);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd7d6bc64fd9a393158824dd57b897ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd7d6bc64fd9a393158824dd57b897ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd7d6bc64fd9a393158824dd57b897ed, exception_lineno);
    }



    assertFrameObject(frame_cd7d6bc64fd9a393158824dd57b897ed);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore$_backends$base", false);

    Py_INCREF(module_httpcore$_backends$base);
    return module_httpcore$_backends$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_backends$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_backends$base", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
