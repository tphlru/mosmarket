/* Generated code for Python module 'jinja2$tests'
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

/* The "module_jinja2$tests" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jinja2$tests;
PyDictObject *moduledict_jinja2$tests;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[135];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[135];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("jinja2.tests"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 135; i++) {
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
void checkModuleConstants_jinja2$tests(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 135; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d3abc326f9a3c432c3c09d8eb022170f;
static PyCodeObject *codeobj_a8343c1a39794114404d54456d844789;
static PyCodeObject *codeobj_4bea087c0d579277a1d16a37387f1ad8;
static PyCodeObject *codeobj_1d26e97d3ac61baafb64c60db208f16a;
static PyCodeObject *codeobj_cbd040dbb2f0494331457ef0d4d2a4dc;
static PyCodeObject *codeobj_23f7723f7e62686e2ba47f68d742c799;
static PyCodeObject *codeobj_22a458a73827d1171ed7cecfd1f09845;
static PyCodeObject *codeobj_4bac9d13c41ec66e190ccb838be18b47;
static PyCodeObject *codeobj_dba400cef03f38cb1dc753708ba8eb6f;
static PyCodeObject *codeobj_5262cef6cb79263d47f04b7f1eb25c70;
static PyCodeObject *codeobj_afa4a6b64be93cdc26e8d8948deb3629;
static PyCodeObject *codeobj_3e98b081a2882c4a8c635947e98c9052;
static PyCodeObject *codeobj_7d92db993a5e63f83f6712b180bf2002;
static PyCodeObject *codeobj_7ae4b7fa622d44979140be8821b505f1;
static PyCodeObject *codeobj_dc139aadc2dc07a4e6127f73b4119458;
static PyCodeObject *codeobj_55806752c77955f8743e07570d04afd2;
static PyCodeObject *codeobj_8382c845d99e0ef1305527ec6e3113f9;
static PyCodeObject *codeobj_6b6e51d93e528b3d6f584912b9e28c92;
static PyCodeObject *codeobj_117835981a0c3707149915d1fad4d2cf;
static PyCodeObject *codeobj_0b3891bfcecad0b9ab7a6f5f00916fc4;
static PyCodeObject *codeobj_631407a267886843a03a693312f4b67d;
static PyCodeObject *codeobj_aacb348b6f6950af05d82e9905fb471e;
static PyCodeObject *codeobj_7d98b0bede8518fa88dd0ee2f0a617b5;
static PyCodeObject *codeobj_b657990a6a8e7b4be67bf4aabeb8c49a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[127]); CHECK_OBJECT(module_filename_obj);
    codeobj_d3abc326f9a3c432c3c09d8eb022170f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_a8343c1a39794114404d54456d844789 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[129], NULL, 1, 0, 0);
    codeobj_4bea087c0d579277a1d16a37387f1ad8 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[129], NULL, 1, 0, 0);
    codeobj_1d26e97d3ac61baafb64c60db208f16a = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[130], NULL, 2, 0, 0);
    codeobj_cbd040dbb2f0494331457ef0d4d2a4dc = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[129], NULL, 1, 0, 0);
    codeobj_23f7723f7e62686e2ba47f68d742c799 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[129], NULL, 1, 0, 0);
    codeobj_22a458a73827d1171ed7cecfd1f09845 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[129], NULL, 1, 0, 0);
    codeobj_4bac9d13c41ec66e190ccb838be18b47 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[131], NULL, 2, 0, 0);
    codeobj_dba400cef03f38cb1dc753708ba8eb6f = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[129], NULL, 1, 0, 0);
    codeobj_5262cef6cb79263d47f04b7f1eb25c70 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[132], NULL, 2, 0, 0);
    codeobj_afa4a6b64be93cdc26e8d8948deb3629 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[129], NULL, 1, 0, 0);
    codeobj_3e98b081a2882c4a8c635947e98c9052 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[129], NULL, 1, 0, 0);
    codeobj_7d92db993a5e63f83f6712b180bf2002 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[129], NULL, 1, 0, 0);
    codeobj_7ae4b7fa622d44979140be8821b505f1 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[129], NULL, 1, 0, 0);
    codeobj_dc139aadc2dc07a4e6127f73b4119458 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[129], NULL, 1, 0, 0);
    codeobj_55806752c77955f8743e07570d04afd2 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[129], NULL, 1, 0, 0);
    codeobj_8382c845d99e0ef1305527ec6e3113f9 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[129], NULL, 1, 0, 0);
    codeobj_6b6e51d93e528b3d6f584912b9e28c92 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[133], NULL, 2, 0, 0);
    codeobj_117835981a0c3707149915d1fad4d2cf = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[129], NULL, 1, 0, 0);
    codeobj_0b3891bfcecad0b9ab7a6f5f00916fc4 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[129], NULL, 1, 0, 0);
    codeobj_631407a267886843a03a693312f4b67d = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[131], NULL, 2, 0, 0);
    codeobj_aacb348b6f6950af05d82e9905fb471e = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[129], NULL, 1, 0, 0);
    codeobj_7d98b0bede8518fa88dd0ee2f0a617b5 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[129], NULL, 1, 0, 0);
    codeobj_b657990a6a8e7b4be67bf4aabeb8c49a = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[129], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__10_test_false(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__11_test_true(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__12_test_integer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__13_test_float(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__14_test_lower(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__15_test_upper(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__16_test_string(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__17_test_mapping(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__18_test_number(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__19_test_sequence(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__1_test_odd(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__20_test_sameas(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__21_test_iterable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__22_test_escaped(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__23_test_in(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__2_test_even(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__3_test_divisibleby(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__4_test_defined(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__5_test_undefined(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__6_test_filter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__7_test_test(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__8_test_none(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__9_test_boolean(PyObject *annotations);


// The module function definitions.
static PyObject *impl_jinja2$tests$$$function__1_test_odd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_8382c845d99e0ef1305527ec6e3113f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8382c845d99e0ef1305527ec6e3113f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8382c845d99e0ef1305527ec6e3113f9)) {
        Py_XDECREF(cache_frame_8382c845d99e0ef1305527ec6e3113f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8382c845d99e0ef1305527ec6e3113f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8382c845d99e0ef1305527ec6e3113f9 = MAKE_FUNCTION_FRAME(tstate, codeobj_8382c845d99e0ef1305527ec6e3113f9, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8382c845d99e0ef1305527ec6e3113f9->m_type_description == NULL);
    frame_8382c845d99e0ef1305527ec6e3113f9 = cache_frame_8382c845d99e0ef1305527ec6e3113f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8382c845d99e0ef1305527ec6e3113f9);
    assert(Py_REFCNT(frame_8382c845d99e0ef1305527ec6e3113f9) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_mod_expr_left_1 = par_value;
        tmp_mod_expr_right_1 = mod_consts[0];
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8382c845d99e0ef1305527ec6e3113f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8382c845d99e0ef1305527ec6e3113f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8382c845d99e0ef1305527ec6e3113f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8382c845d99e0ef1305527ec6e3113f9,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8382c845d99e0ef1305527ec6e3113f9 == cache_frame_8382c845d99e0ef1305527ec6e3113f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8382c845d99e0ef1305527ec6e3113f9);
        cache_frame_8382c845d99e0ef1305527ec6e3113f9 = NULL;
    }

    assertFrameObject(frame_8382c845d99e0ef1305527ec6e3113f9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__2_test_even(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_23f7723f7e62686e2ba47f68d742c799;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_23f7723f7e62686e2ba47f68d742c799 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23f7723f7e62686e2ba47f68d742c799)) {
        Py_XDECREF(cache_frame_23f7723f7e62686e2ba47f68d742c799);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23f7723f7e62686e2ba47f68d742c799 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23f7723f7e62686e2ba47f68d742c799 = MAKE_FUNCTION_FRAME(tstate, codeobj_23f7723f7e62686e2ba47f68d742c799, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23f7723f7e62686e2ba47f68d742c799->m_type_description == NULL);
    frame_23f7723f7e62686e2ba47f68d742c799 = cache_frame_23f7723f7e62686e2ba47f68d742c799;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_23f7723f7e62686e2ba47f68d742c799);
    assert(Py_REFCNT(frame_23f7723f7e62686e2ba47f68d742c799) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_mod_expr_left_1 = par_value;
        tmp_mod_expr_right_1 = mod_consts[0];
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23f7723f7e62686e2ba47f68d742c799, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23f7723f7e62686e2ba47f68d742c799->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23f7723f7e62686e2ba47f68d742c799, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23f7723f7e62686e2ba47f68d742c799,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_23f7723f7e62686e2ba47f68d742c799 == cache_frame_23f7723f7e62686e2ba47f68d742c799) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23f7723f7e62686e2ba47f68d742c799);
        cache_frame_23f7723f7e62686e2ba47f68d742c799 = NULL;
    }

    assertFrameObject(frame_23f7723f7e62686e2ba47f68d742c799);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__3_test_divisibleby(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_num = python_pars[1];
    struct Nuitka_FrameObject *frame_1d26e97d3ac61baafb64c60db208f16a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d26e97d3ac61baafb64c60db208f16a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d26e97d3ac61baafb64c60db208f16a)) {
        Py_XDECREF(cache_frame_1d26e97d3ac61baafb64c60db208f16a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d26e97d3ac61baafb64c60db208f16a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d26e97d3ac61baafb64c60db208f16a = MAKE_FUNCTION_FRAME(tstate, codeobj_1d26e97d3ac61baafb64c60db208f16a, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d26e97d3ac61baafb64c60db208f16a->m_type_description == NULL);
    frame_1d26e97d3ac61baafb64c60db208f16a = cache_frame_1d26e97d3ac61baafb64c60db208f16a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1d26e97d3ac61baafb64c60db208f16a);
    assert(Py_REFCNT(frame_1d26e97d3ac61baafb64c60db208f16a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_mod_expr_left_1 = par_value;
        CHECK_OBJECT(par_num);
        tmp_mod_expr_right_1 = par_num;
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d26e97d3ac61baafb64c60db208f16a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d26e97d3ac61baafb64c60db208f16a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d26e97d3ac61baafb64c60db208f16a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d26e97d3ac61baafb64c60db208f16a,
        type_description_1,
        par_value,
        par_num
    );


    // Release cached frame if used for exception.
    if (frame_1d26e97d3ac61baafb64c60db208f16a == cache_frame_1d26e97d3ac61baafb64c60db208f16a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d26e97d3ac61baafb64c60db208f16a);
        cache_frame_1d26e97d3ac61baafb64c60db208f16a = NULL;
    }

    assertFrameObject(frame_1d26e97d3ac61baafb64c60db208f16a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__4_test_defined(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_4bea087c0d579277a1d16a37387f1ad8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4bea087c0d579277a1d16a37387f1ad8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4bea087c0d579277a1d16a37387f1ad8)) {
        Py_XDECREF(cache_frame_4bea087c0d579277a1d16a37387f1ad8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4bea087c0d579277a1d16a37387f1ad8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4bea087c0d579277a1d16a37387f1ad8 = MAKE_FUNCTION_FRAME(tstate, codeobj_4bea087c0d579277a1d16a37387f1ad8, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4bea087c0d579277a1d16a37387f1ad8->m_type_description == NULL);
    frame_4bea087c0d579277a1d16a37387f1ad8 = cache_frame_4bea087c0d579277a1d16a37387f1ad8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4bea087c0d579277a1d16a37387f1ad8);
    assert(Py_REFCNT(frame_4bea087c0d579277a1d16a37387f1ad8) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4bea087c0d579277a1d16a37387f1ad8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4bea087c0d579277a1d16a37387f1ad8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4bea087c0d579277a1d16a37387f1ad8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4bea087c0d579277a1d16a37387f1ad8,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4bea087c0d579277a1d16a37387f1ad8 == cache_frame_4bea087c0d579277a1d16a37387f1ad8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4bea087c0d579277a1d16a37387f1ad8);
        cache_frame_4bea087c0d579277a1d16a37387f1ad8 = NULL;
    }

    assertFrameObject(frame_4bea087c0d579277a1d16a37387f1ad8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__5_test_undefined(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_7d98b0bede8518fa88dd0ee2f0a617b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5)) {
        Py_XDECREF(cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5 = MAKE_FUNCTION_FRAME(tstate, codeobj_7d98b0bede8518fa88dd0ee2f0a617b5, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5->m_type_description == NULL);
    frame_7d98b0bede8518fa88dd0ee2f0a617b5 = cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d98b0bede8518fa88dd0ee2f0a617b5);
    assert(Py_REFCNT(frame_7d98b0bede8518fa88dd0ee2f0a617b5) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d98b0bede8518fa88dd0ee2f0a617b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d98b0bede8518fa88dd0ee2f0a617b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d98b0bede8518fa88dd0ee2f0a617b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d98b0bede8518fa88dd0ee2f0a617b5,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7d98b0bede8518fa88dd0ee2f0a617b5 == cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5);
        cache_frame_7d98b0bede8518fa88dd0ee2f0a617b5 = NULL;
    }

    assertFrameObject(frame_7d98b0bede8518fa88dd0ee2f0a617b5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__6_test_filter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_env = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4bac9d13c41ec66e190ccb838be18b47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4bac9d13c41ec66e190ccb838be18b47 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4bac9d13c41ec66e190ccb838be18b47)) {
        Py_XDECREF(cache_frame_4bac9d13c41ec66e190ccb838be18b47);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4bac9d13c41ec66e190ccb838be18b47 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4bac9d13c41ec66e190ccb838be18b47 = MAKE_FUNCTION_FRAME(tstate, codeobj_4bac9d13c41ec66e190ccb838be18b47, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4bac9d13c41ec66e190ccb838be18b47->m_type_description == NULL);
    frame_4bac9d13c41ec66e190ccb838be18b47 = cache_frame_4bac9d13c41ec66e190ccb838be18b47;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4bac9d13c41ec66e190ccb838be18b47);
    assert(Py_REFCNT(frame_4bac9d13c41ec66e190ccb838be18b47) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_env);
        tmp_expression_value_1 = par_env;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4bac9d13c41ec66e190ccb838be18b47, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4bac9d13c41ec66e190ccb838be18b47->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4bac9d13c41ec66e190ccb838be18b47, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4bac9d13c41ec66e190ccb838be18b47,
        type_description_1,
        par_env,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4bac9d13c41ec66e190ccb838be18b47 == cache_frame_4bac9d13c41ec66e190ccb838be18b47) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4bac9d13c41ec66e190ccb838be18b47);
        cache_frame_4bac9d13c41ec66e190ccb838be18b47 = NULL;
    }

    assertFrameObject(frame_4bac9d13c41ec66e190ccb838be18b47);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__7_test_test(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_env = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_631407a267886843a03a693312f4b67d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_631407a267886843a03a693312f4b67d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_631407a267886843a03a693312f4b67d)) {
        Py_XDECREF(cache_frame_631407a267886843a03a693312f4b67d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_631407a267886843a03a693312f4b67d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_631407a267886843a03a693312f4b67d = MAKE_FUNCTION_FRAME(tstate, codeobj_631407a267886843a03a693312f4b67d, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_631407a267886843a03a693312f4b67d->m_type_description == NULL);
    frame_631407a267886843a03a693312f4b67d = cache_frame_631407a267886843a03a693312f4b67d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_631407a267886843a03a693312f4b67d);
    assert(Py_REFCNT(frame_631407a267886843a03a693312f4b67d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_env);
        tmp_expression_value_1 = par_env;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_631407a267886843a03a693312f4b67d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_631407a267886843a03a693312f4b67d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_631407a267886843a03a693312f4b67d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_631407a267886843a03a693312f4b67d,
        type_description_1,
        par_env,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_631407a267886843a03a693312f4b67d == cache_frame_631407a267886843a03a693312f4b67d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_631407a267886843a03a693312f4b67d);
        cache_frame_631407a267886843a03a693312f4b67d = NULL;
    }

    assertFrameObject(frame_631407a267886843a03a693312f4b67d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__8_test_none(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__9_test_boolean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__10_test_false(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_False;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__11_test_true(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__12_test_integer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_afa4a6b64be93cdc26e8d8948deb3629;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_afa4a6b64be93cdc26e8d8948deb3629 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afa4a6b64be93cdc26e8d8948deb3629)) {
        Py_XDECREF(cache_frame_afa4a6b64be93cdc26e8d8948deb3629);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afa4a6b64be93cdc26e8d8948deb3629 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afa4a6b64be93cdc26e8d8948deb3629 = MAKE_FUNCTION_FRAME(tstate, codeobj_afa4a6b64be93cdc26e8d8948deb3629, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_afa4a6b64be93cdc26e8d8948deb3629->m_type_description == NULL);
    frame_afa4a6b64be93cdc26e8d8948deb3629 = cache_frame_afa4a6b64be93cdc26e8d8948deb3629;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_afa4a6b64be93cdc26e8d8948deb3629);
    assert(Py_REFCNT(frame_afa4a6b64be93cdc26e8d8948deb3629) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_and_right_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afa4a6b64be93cdc26e8d8948deb3629, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afa4a6b64be93cdc26e8d8948deb3629->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afa4a6b64be93cdc26e8d8948deb3629, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afa4a6b64be93cdc26e8d8948deb3629,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_afa4a6b64be93cdc26e8d8948deb3629 == cache_frame_afa4a6b64be93cdc26e8d8948deb3629) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_afa4a6b64be93cdc26e8d8948deb3629);
        cache_frame_afa4a6b64be93cdc26e8d8948deb3629 = NULL;
    }

    assertFrameObject(frame_afa4a6b64be93cdc26e8d8948deb3629);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__13_test_float(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_dba400cef03f38cb1dc753708ba8eb6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dba400cef03f38cb1dc753708ba8eb6f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dba400cef03f38cb1dc753708ba8eb6f)) {
        Py_XDECREF(cache_frame_dba400cef03f38cb1dc753708ba8eb6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dba400cef03f38cb1dc753708ba8eb6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dba400cef03f38cb1dc753708ba8eb6f = MAKE_FUNCTION_FRAME(tstate, codeobj_dba400cef03f38cb1dc753708ba8eb6f, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dba400cef03f38cb1dc753708ba8eb6f->m_type_description == NULL);
    frame_dba400cef03f38cb1dc753708ba8eb6f = cache_frame_dba400cef03f38cb1dc753708ba8eb6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dba400cef03f38cb1dc753708ba8eb6f);
    assert(Py_REFCNT(frame_dba400cef03f38cb1dc753708ba8eb6f) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dba400cef03f38cb1dc753708ba8eb6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dba400cef03f38cb1dc753708ba8eb6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dba400cef03f38cb1dc753708ba8eb6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dba400cef03f38cb1dc753708ba8eb6f,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_dba400cef03f38cb1dc753708ba8eb6f == cache_frame_dba400cef03f38cb1dc753708ba8eb6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dba400cef03f38cb1dc753708ba8eb6f);
        cache_frame_dba400cef03f38cb1dc753708ba8eb6f = NULL;
    }

    assertFrameObject(frame_dba400cef03f38cb1dc753708ba8eb6f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__14_test_lower(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_7d92db993a5e63f83f6712b180bf2002;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d92db993a5e63f83f6712b180bf2002 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d92db993a5e63f83f6712b180bf2002)) {
        Py_XDECREF(cache_frame_7d92db993a5e63f83f6712b180bf2002);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d92db993a5e63f83f6712b180bf2002 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d92db993a5e63f83f6712b180bf2002 = MAKE_FUNCTION_FRAME(tstate, codeobj_7d92db993a5e63f83f6712b180bf2002, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d92db993a5e63f83f6712b180bf2002->m_type_description == NULL);
    frame_7d92db993a5e63f83f6712b180bf2002 = cache_frame_7d92db993a5e63f83f6712b180bf2002;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d92db993a5e63f83f6712b180bf2002);
    assert(Py_REFCNT(frame_7d92db993a5e63f83f6712b180bf2002) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7d92db993a5e63f83f6712b180bf2002->m_frame.f_lineno = 140;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d92db993a5e63f83f6712b180bf2002, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d92db993a5e63f83f6712b180bf2002->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d92db993a5e63f83f6712b180bf2002, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d92db993a5e63f83f6712b180bf2002,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7d92db993a5e63f83f6712b180bf2002 == cache_frame_7d92db993a5e63f83f6712b180bf2002) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d92db993a5e63f83f6712b180bf2002);
        cache_frame_7d92db993a5e63f83f6712b180bf2002 = NULL;
    }

    assertFrameObject(frame_7d92db993a5e63f83f6712b180bf2002);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__15_test_upper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_b657990a6a8e7b4be67bf4aabeb8c49a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a)) {
        Py_XDECREF(cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a = MAKE_FUNCTION_FRAME(tstate, codeobj_b657990a6a8e7b4be67bf4aabeb8c49a, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a->m_type_description == NULL);
    frame_b657990a6a8e7b4be67bf4aabeb8c49a = cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b657990a6a8e7b4be67bf4aabeb8c49a);
    assert(Py_REFCNT(frame_b657990a6a8e7b4be67bf4aabeb8c49a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b657990a6a8e7b4be67bf4aabeb8c49a->m_frame.f_lineno = 145;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b657990a6a8e7b4be67bf4aabeb8c49a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b657990a6a8e7b4be67bf4aabeb8c49a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b657990a6a8e7b4be67bf4aabeb8c49a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b657990a6a8e7b4be67bf4aabeb8c49a,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b657990a6a8e7b4be67bf4aabeb8c49a == cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a);
        cache_frame_b657990a6a8e7b4be67bf4aabeb8c49a = NULL;
    }

    assertFrameObject(frame_b657990a6a8e7b4be67bf4aabeb8c49a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__16_test_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_0b3891bfcecad0b9ab7a6f5f00916fc4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4)) {
        Py_XDECREF(cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4 = MAKE_FUNCTION_FRAME(tstate, codeobj_0b3891bfcecad0b9ab7a6f5f00916fc4, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4->m_type_description == NULL);
    frame_0b3891bfcecad0b9ab7a6f5f00916fc4 = cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0b3891bfcecad0b9ab7a6f5f00916fc4);
    assert(Py_REFCNT(frame_0b3891bfcecad0b9ab7a6f5f00916fc4) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b3891bfcecad0b9ab7a6f5f00916fc4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b3891bfcecad0b9ab7a6f5f00916fc4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b3891bfcecad0b9ab7a6f5f00916fc4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b3891bfcecad0b9ab7a6f5f00916fc4,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0b3891bfcecad0b9ab7a6f5f00916fc4 == cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4);
        cache_frame_0b3891bfcecad0b9ab7a6f5f00916fc4 = NULL;
    }

    assertFrameObject(frame_0b3891bfcecad0b9ab7a6f5f00916fc4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__17_test_mapping(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_7ae4b7fa622d44979140be8821b505f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7ae4b7fa622d44979140be8821b505f1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ae4b7fa622d44979140be8821b505f1)) {
        Py_XDECREF(cache_frame_7ae4b7fa622d44979140be8821b505f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ae4b7fa622d44979140be8821b505f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ae4b7fa622d44979140be8821b505f1 = MAKE_FUNCTION_FRAME(tstate, codeobj_7ae4b7fa622d44979140be8821b505f1, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ae4b7fa622d44979140be8821b505f1->m_type_description == NULL);
    frame_7ae4b7fa622d44979140be8821b505f1 = cache_frame_7ae4b7fa622d44979140be8821b505f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7ae4b7fa622d44979140be8821b505f1);
    assert(Py_REFCNT(frame_7ae4b7fa622d44979140be8821b505f1) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ae4b7fa622d44979140be8821b505f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ae4b7fa622d44979140be8821b505f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ae4b7fa622d44979140be8821b505f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ae4b7fa622d44979140be8821b505f1,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7ae4b7fa622d44979140be8821b505f1 == cache_frame_7ae4b7fa622d44979140be8821b505f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ae4b7fa622d44979140be8821b505f1);
        cache_frame_7ae4b7fa622d44979140be8821b505f1 = NULL;
    }

    assertFrameObject(frame_7ae4b7fa622d44979140be8821b505f1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__18_test_number(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_55806752c77955f8743e07570d04afd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_55806752c77955f8743e07570d04afd2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55806752c77955f8743e07570d04afd2)) {
        Py_XDECREF(cache_frame_55806752c77955f8743e07570d04afd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55806752c77955f8743e07570d04afd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55806752c77955f8743e07570d04afd2 = MAKE_FUNCTION_FRAME(tstate, codeobj_55806752c77955f8743e07570d04afd2, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55806752c77955f8743e07570d04afd2->m_type_description == NULL);
    frame_55806752c77955f8743e07570d04afd2 = cache_frame_55806752c77955f8743e07570d04afd2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_55806752c77955f8743e07570d04afd2);
    assert(Py_REFCNT(frame_55806752c77955f8743e07570d04afd2) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55806752c77955f8743e07570d04afd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55806752c77955f8743e07570d04afd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55806752c77955f8743e07570d04afd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55806752c77955f8743e07570d04afd2,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_55806752c77955f8743e07570d04afd2 == cache_frame_55806752c77955f8743e07570d04afd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55806752c77955f8743e07570d04afd2);
        cache_frame_55806752c77955f8743e07570d04afd2 = NULL;
    }

    assertFrameObject(frame_55806752c77955f8743e07570d04afd2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__19_test_sequence(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_117835981a0c3707149915d1fad4d2cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_117835981a0c3707149915d1fad4d2cf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_117835981a0c3707149915d1fad4d2cf)) {
        Py_XDECREF(cache_frame_117835981a0c3707149915d1fad4d2cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_117835981a0c3707149915d1fad4d2cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_117835981a0c3707149915d1fad4d2cf = MAKE_FUNCTION_FRAME(tstate, codeobj_117835981a0c3707149915d1fad4d2cf, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_117835981a0c3707149915d1fad4d2cf->m_type_description == NULL);
    frame_117835981a0c3707149915d1fad4d2cf = cache_frame_117835981a0c3707149915d1fad4d2cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_117835981a0c3707149915d1fad4d2cf);
    assert(Py_REFCNT(frame_117835981a0c3707149915d1fad4d2cf) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_value);
        tmp_len_arg_1 = par_value;
        tmp_capi_result_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_capi_result_1);
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_attribute_value_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_117835981a0c3707149915d1fad4d2cf, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_117835981a0c3707149915d1fad4d2cf, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 170;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_117835981a0c3707149915d1fad4d2cf->m_frame) frame_117835981a0c3707149915d1fad4d2cf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_117835981a0c3707149915d1fad4d2cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_117835981a0c3707149915d1fad4d2cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_117835981a0c3707149915d1fad4d2cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_117835981a0c3707149915d1fad4d2cf,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_117835981a0c3707149915d1fad4d2cf == cache_frame_117835981a0c3707149915d1fad4d2cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_117835981a0c3707149915d1fad4d2cf);
        cache_frame_117835981a0c3707149915d1fad4d2cf = NULL;
    }

    assertFrameObject(frame_117835981a0c3707149915d1fad4d2cf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__20_test_sameas(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__21_test_iterable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_3e98b081a2882c4a8c635947e98c9052;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3e98b081a2882c4a8c635947e98c9052 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e98b081a2882c4a8c635947e98c9052)) {
        Py_XDECREF(cache_frame_3e98b081a2882c4a8c635947e98c9052);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e98b081a2882c4a8c635947e98c9052 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e98b081a2882c4a8c635947e98c9052 = MAKE_FUNCTION_FRAME(tstate, codeobj_3e98b081a2882c4a8c635947e98c9052, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e98b081a2882c4a8c635947e98c9052->m_type_description == NULL);
    frame_3e98b081a2882c4a8c635947e98c9052 = cache_frame_3e98b081a2882c4a8c635947e98c9052;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3e98b081a2882c4a8c635947e98c9052);
    assert(Py_REFCNT(frame_3e98b081a2882c4a8c635947e98c9052) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_value);
        tmp_iter_arg_1 = par_value;
        tmp_capi_result_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_capi_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3e98b081a2882c4a8c635947e98c9052, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3e98b081a2882c4a8c635947e98c9052, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 194;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3e98b081a2882c4a8c635947e98c9052->m_frame) frame_3e98b081a2882c4a8c635947e98c9052->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e98b081a2882c4a8c635947e98c9052, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e98b081a2882c4a8c635947e98c9052->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e98b081a2882c4a8c635947e98c9052, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e98b081a2882c4a8c635947e98c9052,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_3e98b081a2882c4a8c635947e98c9052 == cache_frame_3e98b081a2882c4a8c635947e98c9052) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e98b081a2882c4a8c635947e98c9052);
        cache_frame_3e98b081a2882c4a8c635947e98c9052 = NULL;
    }

    assertFrameObject(frame_3e98b081a2882c4a8c635947e98c9052);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__22_test_escaped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_cbd040dbb2f0494331457ef0d4d2a4dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc)) {
        Py_XDECREF(cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc = MAKE_FUNCTION_FRAME(tstate, codeobj_cbd040dbb2f0494331457ef0d4d2a4dc, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc->m_type_description == NULL);
    frame_cbd040dbb2f0494331457ef0d4d2a4dc = cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cbd040dbb2f0494331457ef0d4d2a4dc);
    assert(Py_REFCNT(frame_cbd040dbb2f0494331457ef0d4d2a4dc) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[33]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cbd040dbb2f0494331457ef0d4d2a4dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbd040dbb2f0494331457ef0d4d2a4dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbd040dbb2f0494331457ef0d4d2a4dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cbd040dbb2f0494331457ef0d4d2a4dc,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cbd040dbb2f0494331457ef0d4d2a4dc == cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc);
        cache_frame_cbd040dbb2f0494331457ef0d4d2a4dc = NULL;
    }

    assertFrameObject(frame_cbd040dbb2f0494331457ef0d4d2a4dc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__23_test_in(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_seq = python_pars[1];
    struct Nuitka_FrameObject *frame_5262cef6cb79263d47f04b7f1eb25c70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5262cef6cb79263d47f04b7f1eb25c70 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5262cef6cb79263d47f04b7f1eb25c70)) {
        Py_XDECREF(cache_frame_5262cef6cb79263d47f04b7f1eb25c70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5262cef6cb79263d47f04b7f1eb25c70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5262cef6cb79263d47f04b7f1eb25c70 = MAKE_FUNCTION_FRAME(tstate, codeobj_5262cef6cb79263d47f04b7f1eb25c70, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5262cef6cb79263d47f04b7f1eb25c70->m_type_description == NULL);
    frame_5262cef6cb79263d47f04b7f1eb25c70 = cache_frame_5262cef6cb79263d47f04b7f1eb25c70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5262cef6cb79263d47f04b7f1eb25c70);
    assert(Py_REFCNT(frame_5262cef6cb79263d47f04b7f1eb25c70) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_seq);
        tmp_cmp_expr_right_1 = par_seq;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5262cef6cb79263d47f04b7f1eb25c70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5262cef6cb79263d47f04b7f1eb25c70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5262cef6cb79263d47f04b7f1eb25c70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5262cef6cb79263d47f04b7f1eb25c70,
        type_description_1,
        par_value,
        par_seq
    );


    // Release cached frame if used for exception.
    if (frame_5262cef6cb79263d47f04b7f1eb25c70 == cache_frame_5262cef6cb79263d47f04b7f1eb25c70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5262cef6cb79263d47f04b7f1eb25c70);
        cache_frame_5262cef6cb79263d47f04b7f1eb25c70 = NULL;
    }

    assertFrameObject(frame_5262cef6cb79263d47f04b7f1eb25c70);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_seq);
    Py_DECREF(par_seq);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_seq);
    Py_DECREF(par_seq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__10_test_false(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__10_test_false,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22a458a73827d1171ed7cecfd1f09845,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__11_test_true(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__11_test_true,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aacb348b6f6950af05d82e9905fb471e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__12_test_integer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__12_test_integer,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_afa4a6b64be93cdc26e8d8948deb3629,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__13_test_float(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__13_test_float,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dba400cef03f38cb1dc753708ba8eb6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__14_test_lower(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__14_test_lower,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d92db993a5e63f83f6712b180bf2002,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__15_test_upper(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__15_test_upper,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b657990a6a8e7b4be67bf4aabeb8c49a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__16_test_string(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__16_test_string,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b3891bfcecad0b9ab7a6f5f00916fc4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__17_test_mapping(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__17_test_mapping,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ae4b7fa622d44979140be8821b505f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__18_test_number(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__18_test_number,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_55806752c77955f8743e07570d04afd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__19_test_sequence(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__19_test_sequence,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_117835981a0c3707149915d1fad4d2cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__1_test_odd(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__1_test_odd,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8382c845d99e0ef1305527ec6e3113f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__20_test_sameas(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__20_test_sameas,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b6e51d93e528b3d6f584912b9e28c92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__21_test_iterable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__21_test_iterable,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3e98b081a2882c4a8c635947e98c9052,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__22_test_escaped(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__22_test_escaped,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cbd040dbb2f0494331457ef0d4d2a4dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__23_test_in(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__23_test_in,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5262cef6cb79263d47f04b7f1eb25c70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__2_test_even(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__2_test_even,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_23f7723f7e62686e2ba47f68d742c799,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__3_test_divisibleby(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__3_test_divisibleby,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d26e97d3ac61baafb64c60db208f16a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__4_test_defined(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__4_test_defined,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4bea087c0d579277a1d16a37387f1ad8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__5_test_undefined(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__5_test_undefined,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d98b0bede8518fa88dd0ee2f0a617b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__6_test_filter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__6_test_filter,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4bac9d13c41ec66e190ccb838be18b47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__7_test_test(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__7_test_test,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_631407a267886843a03a693312f4b67d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__8_test_none(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__8_test_none,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc139aadc2dc07a4e6127f73b4119458,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__9_test_boolean(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__9_test_boolean,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a8343c1a39794114404d54456d844789,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[14],
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

static function_impl_code const function_table_jinja2$tests[] = {
    impl_jinja2$tests$$$function__1_test_odd,
    impl_jinja2$tests$$$function__2_test_even,
    impl_jinja2$tests$$$function__3_test_divisibleby,
    impl_jinja2$tests$$$function__4_test_defined,
    impl_jinja2$tests$$$function__5_test_undefined,
    impl_jinja2$tests$$$function__6_test_filter,
    impl_jinja2$tests$$$function__7_test_test,
    impl_jinja2$tests$$$function__8_test_none,
    impl_jinja2$tests$$$function__9_test_boolean,
    impl_jinja2$tests$$$function__10_test_false,
    impl_jinja2$tests$$$function__11_test_true,
    impl_jinja2$tests$$$function__12_test_integer,
    impl_jinja2$tests$$$function__13_test_float,
    impl_jinja2$tests$$$function__14_test_lower,
    impl_jinja2$tests$$$function__15_test_upper,
    impl_jinja2$tests$$$function__16_test_string,
    impl_jinja2$tests$$$function__17_test_mapping,
    impl_jinja2$tests$$$function__18_test_number,
    impl_jinja2$tests$$$function__19_test_sequence,
    impl_jinja2$tests$$$function__20_test_sameas,
    impl_jinja2$tests$$$function__21_test_iterable,
    impl_jinja2$tests$$$function__22_test_escaped,
    impl_jinja2$tests$$$function__23_test_in,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_jinja2$tests);

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
        module_jinja2$tests,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_jinja2$tests,
        sizeof(function_table_jinja2$tests) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_jinja2$tests(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("jinja2$tests");

    // Store the module for future use.
    module_jinja2$tests = module;

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
        PRINT_STRING("jinja2$tests: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("jinja2$tests: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initjinja2$tests\n");

    moduledict_jinja2$tests = MODULE_DICT(module_jinja2$tests);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_jinja2$tests,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_jinja2$tests,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[134]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_jinja2$tests,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_jinja2$tests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_jinja2$tests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_jinja2$tests);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_jinja2$tests);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_d3abc326f9a3c432c3c09d8eb022170f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_2);
    }
    frame_d3abc326f9a3c432c3c09d8eb022170f = MAKE_MODULE_FRAME(codeobj_d3abc326f9a3c432c3c09d8eb022170f, module_jinja2$tests);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d3abc326f9a3c432c3c09d8eb022170f);
    assert(Py_REFCNT(frame_d3abc326f9a3c432c3c09d8eb022170f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[41], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[45];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[46];
        tmp_level_value_2 = mod_consts[3];
        frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[24],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[47];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[48];
        tmp_level_value_3 = mod_consts[3];
        frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[27],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[49];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[50];
        tmp_level_value_4 = mod_consts[1];
        frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[6],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[51];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[52];
        tmp_level_value_5 = mod_consts[1];
        frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[53],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[54]);


        tmp_assign_source_10 = MAKE_FUNCTION_jinja2$tests$$$function__1_test_odd(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[54]);


        tmp_assign_source_11 = MAKE_FUNCTION_jinja2$tests$$$function__2_test_even(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[57]);


        tmp_assign_source_12 = MAKE_FUNCTION_jinja2$tests$$$function__3_test_divisibleby(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[59];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[61];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_13 = MAKE_FUNCTION_jinja2$tests$$$function__4_test_defined(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_2;
        tmp_dict_key_2 = mod_consts[59];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[60]);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[61];
        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_14 = MAKE_FUNCTION_jinja2$tests$$$function__5_test_undefined(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_annotations_6 = DICT_COPY(mod_consts[64]);


        tmp_args_element_value_1 = MAKE_FUNCTION_jinja2$tests$$$function__6_test_filter(tmp_annotations_6);

        frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame.f_lineno = 51;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = DICT_COPY(mod_consts[64]);


        tmp_args_element_value_2 = MAKE_FUNCTION_jinja2$tests$$$function__7_test_test(tmp_annotations_7);

        frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame.f_lineno = 69;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_3;
        tmp_dict_key_3 = mod_consts[59];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[60]);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[61];
        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_17 = MAKE_FUNCTION_jinja2$tests$$$function__8_test_none(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_4;
        tmp_dict_key_4 = mod_consts[59];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[60]);
        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[61];
        tmp_dict_value_4 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_18 = MAKE_FUNCTION_jinja2$tests$$$function__9_test_boolean(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_5;
        tmp_dict_key_5 = mod_consts[59];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[60]);
        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[61];
        tmp_dict_value_5 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_19 = MAKE_FUNCTION_jinja2$tests$$$function__10_test_false(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_6;
        tmp_dict_key_6 = mod_consts[59];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[60]);
        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[61];
        tmp_dict_value_6 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_jinja2$tests$$$function__11_test_true(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_7;
        tmp_dict_key_7 = mod_consts[59];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[60]);
        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[61];
        tmp_dict_value_7 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_jinja2$tests$$$function__12_test_integer(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_8;
        tmp_dict_key_8 = mod_consts[59];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[60]);
        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[61];
        tmp_dict_value_8 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_jinja2$tests$$$function__13_test_float(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_14;
        tmp_annotations_14 = DICT_COPY(mod_consts[73]);


        tmp_assign_source_23 = MAKE_FUNCTION_jinja2$tests$$$function__14_test_lower(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_15;
        tmp_annotations_15 = DICT_COPY(mod_consts[73]);


        tmp_assign_source_24 = MAKE_FUNCTION_jinja2$tests$$$function__15_test_upper(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_9;
        tmp_dict_key_9 = mod_consts[59];
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[60]);
        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[61];
        tmp_dict_value_9 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_25 = MAKE_FUNCTION_jinja2$tests$$$function__16_test_string(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_10;
        tmp_dict_key_10 = mod_consts[59];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[60]);
        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[61];
        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));


        tmp_assign_source_26 = MAKE_FUNCTION_jinja2$tests$$$function__17_test_mapping(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_11;
        tmp_dict_key_11 = mod_consts[59];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[60]);
        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[61];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_27 = MAKE_FUNCTION_jinja2$tests$$$function__18_test_number(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_12;
        tmp_dict_key_12 = mod_consts[59];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_12 == NULL));
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[60]);
        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[61];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));


        tmp_assign_source_28 = MAKE_FUNCTION_jinja2$tests$$$function__19_test_sequence(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_13;
        tmp_dict_key_13 = mod_consts[59];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[60]);
        if (tmp_dict_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_14;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[80];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            assert(!(tmp_expression_value_14 == NULL));
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[60]);
            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[61];
            tmp_dict_value_13 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_29 = MAKE_FUNCTION_jinja2$tests$$$function__20_test_sameas(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_15;
        tmp_dict_key_14 = mod_consts[59];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[60]);
        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[61];
        tmp_dict_value_14 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_30 = MAKE_FUNCTION_jinja2$tests$$$function__21_test_iterable(tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_16;
        tmp_dict_key_15 = mod_consts[59];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[60]);
        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[61];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_31 = MAKE_FUNCTION_jinja2$tests$$$function__22_test_escaped(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_17;
        tmp_dict_key_16 = mod_consts[59];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_expression_value_17 == NULL));
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[60]);
        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_18;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[84];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            assert(!(tmp_expression_value_18 == NULL));
            tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[85]);
            if (tmp_dict_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[61];
            tmp_dict_value_16 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_32 = MAKE_FUNCTION_jinja2$tests$$$function__23_test_in(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_dict_key_17 = mod_consts[87];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = _PyDict_NewPresized( 39 );
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[88];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[89];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[90];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[91];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[92];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[93];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[94];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[95];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[96];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[97];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[98];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[99];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[100];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[101];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[102];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[103];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[104];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[105];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[106];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[107];
            tmp_dict_value_17 = LOOKUP_BUILTIN(mod_consts[107]);
            assert(tmp_dict_value_17 != NULL);
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[108];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[81]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[109];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[110];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[86]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[111];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[112]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[112];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[112]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[113];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[112]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[114];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[115]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[115];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[115]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[116];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[117]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[117];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[117]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[118];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[117]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[119];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[119]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[120];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[119]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[121];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[122]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[122];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[122]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[123];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[122]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[124];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[125]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[125];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[125]);
            if (tmp_dict_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_33);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_33);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3abc326f9a3c432c3c09d8eb022170f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3abc326f9a3c432c3c09d8eb022170f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3abc326f9a3c432c3c09d8eb022170f, exception_lineno);
    }



    assertFrameObject(frame_d3abc326f9a3c432c3c09d8eb022170f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("jinja2$tests", false);

    Py_INCREF(module_jinja2$tests);
    return module_jinja2$tests;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("jinja2$tests", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
