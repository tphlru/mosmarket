/* Generated code for Python module 'httpx$_exceptions'
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

/* The "module_httpx$_exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_exceptions;
PyDictObject *moduledict_httpx$_exceptions;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[126];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[126];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("httpx._exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 126; i++) {
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
void checkModuleConstants_httpx$_exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 126; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5152aa3dd4fecc186fb5f3d8568a9a27;
static PyCodeObject *codeobj_8d28d3ec9d257ac632d002fd12ae51b3;
static PyCodeObject *codeobj_d7f38080b2990df9370f7f052aa71ac1;
static PyCodeObject *codeobj_0aae47afeb9b9ecd9ee21e410f479dd7;
static PyCodeObject *codeobj_a0291e208987054b9ec09f3adb3fb6b7;
static PyCodeObject *codeobj_188398a5efb0af580b3736627f5ac1c7;
static PyCodeObject *codeobj_7a6ba2d6ad663d701a599a8ce71f384f;
static PyCodeObject *codeobj_50cfe5d411864287b34ce6371e7a490f;
static PyCodeObject *codeobj_9cc5c6ab9ab235c89456523df931ea4e;
static PyCodeObject *codeobj_0532c4c85e08234ad1552272e66270fe;
static PyCodeObject *codeobj_16c9eaacc0956f3a9f4c8c9c6b1affa0;
static PyCodeObject *codeobj_326cf7a209e7f11b4b229e4751c8a530;
static PyCodeObject *codeobj_8bde5baf5239545cbb5074ab8f9326c5;
static PyCodeObject *codeobj_0338e1ff256d149877678ce6f22fd432;
static PyCodeObject *codeobj_ea459418fcb307f445e18b0e633004af;
static PyCodeObject *codeobj_4343b47980624c647970385c2d3b991f;
static PyCodeObject *codeobj_4667a017d655214941a4e34f959a1a1f;
static PyCodeObject *codeobj_e394bf37a0b051daebc4caf0e65ddc63;
static PyCodeObject *codeobj_2e0d5c81cf5e09959aebe4e87b7c4378;
static PyCodeObject *codeobj_00222bacec058e5b3cffb74e62fcc34e;
static PyCodeObject *codeobj_6f5f0ea6539939a3cc286041aa93cc2e;
static PyCodeObject *codeobj_77cc24cc524dd488612769e0be5ead94;
static PyCodeObject *codeobj_72f5c83143aa1115be3222530fc278ff;
static PyCodeObject *codeobj_9de3f967fecae5998b8892a8d2a8eb49;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[116]); CHECK_OBJECT(module_filename_obj);
    codeobj_5152aa3dd4fecc186fb5f3d8568a9a27 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_8d28d3ec9d257ac632d002fd12ae51b3 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[118], NULL, 0, 0, 0);
    codeobj_d7f38080b2990df9370f7f052aa71ac1 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[118], NULL, 0, 0, 0);
    codeobj_0aae47afeb9b9ecd9ee21e410f479dd7 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[118], NULL, 0, 0, 0);
    codeobj_a0291e208987054b9ec09f3adb3fb6b7 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[118], NULL, 0, 0, 0);
    codeobj_188398a5efb0af580b3736627f5ac1c7 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[118], NULL, 0, 0, 0);
    codeobj_7a6ba2d6ad663d701a599a8ce71f384f = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[118], NULL, 0, 0, 0);
    codeobj_50cfe5d411864287b34ce6371e7a490f = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[118], NULL, 0, 0, 0);
    codeobj_9cc5c6ab9ab235c89456523df931ea4e = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[118], NULL, 0, 0, 0);
    codeobj_0532c4c85e08234ad1552272e66270fe = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[118], NULL, 0, 0, 0);
    codeobj_16c9eaacc0956f3a9f4c8c9c6b1affa0 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[118], NULL, 0, 0, 0);
    codeobj_326cf7a209e7f11b4b229e4751c8a530 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 1, 0, 0);
    codeobj_8bde5baf5239545cbb5074ab8f9326c5 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 1, 0, 0);
    codeobj_0338e1ff256d149877678ce6f22fd432 = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 1, 0, 0);
    codeobj_ea459418fcb307f445e18b0e633004af = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 1, 0, 0);
    codeobj_4343b47980624c647970385c2d3b991f = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 2, 0, 0);
    codeobj_4667a017d655214941a4e34f959a1a1f = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 2, 0, 0);
    codeobj_e394bf37a0b051daebc4caf0e65ddc63 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 2, 0, 0);
    codeobj_2e0d5c81cf5e09959aebe4e87b7c4378 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[119], mod_consts[118], 2, 0, 0);
    codeobj_00222bacec058e5b3cffb74e62fcc34e = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[120], mod_consts[118], 2, 1, 0);
    codeobj_6f5f0ea6539939a3cc286041aa93cc2e = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[121], mod_consts[118], 2, 2, 0);
    codeobj_77cc24cc524dd488612769e0be5ead94 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[122], NULL, 1, 0, 0);
    codeobj_72f5c83143aa1115be3222530fc278ff = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[123], NULL, 2, 0, 0);
    codeobj_9de3f967fecae5998b8892a8d2a8eb49 = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[124], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__10___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__11___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__12___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__13_request_context(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__1___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__2_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__3_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__4___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__5___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__6___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__7___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__8___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__9___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_httpx$_exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_4343b47980624c647970385c2d3b991f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4343b47980624c647970385c2d3b991f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4343b47980624c647970385c2d3b991f)) {
        Py_XDECREF(cache_frame_4343b47980624c647970385c2d3b991f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4343b47980624c647970385c2d3b991f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4343b47980624c647970385c2d3b991f = MAKE_FUNCTION_FRAME(tstate, codeobj_4343b47980624c647970385c2d3b991f, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4343b47980624c647970385c2d3b991f->m_type_description == NULL);
    frame_4343b47980624c647970385c2d3b991f = cache_frame_4343b47980624c647970385c2d3b991f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4343b47980624c647970385c2d3b991f);
    assert(Py_REFCNT(frame_4343b47980624c647970385c2d3b991f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 59;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_4343b47980624c647970385c2d3b991f->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4343b47980624c647970385c2d3b991f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4343b47980624c647970385c2d3b991f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4343b47980624c647970385c2d3b991f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4343b47980624c647970385c2d3b991f,
        type_description_1,
        par_self,
        par_message,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4343b47980624c647970385c2d3b991f == cache_frame_4343b47980624c647970385c2d3b991f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4343b47980624c647970385c2d3b991f);
        cache_frame_4343b47980624c647970385c2d3b991f = NULL;
    }

    assertFrameObject(frame_4343b47980624c647970385c2d3b991f);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__2_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_77cc24cc524dd488612769e0be5ead94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_77cc24cc524dd488612769e0be5ead94 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77cc24cc524dd488612769e0be5ead94)) {
        Py_XDECREF(cache_frame_77cc24cc524dd488612769e0be5ead94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77cc24cc524dd488612769e0be5ead94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77cc24cc524dd488612769e0be5ead94 = MAKE_FUNCTION_FRAME(tstate, codeobj_77cc24cc524dd488612769e0be5ead94, module_httpx$_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_77cc24cc524dd488612769e0be5ead94->m_type_description == NULL);
    frame_77cc24cc524dd488612769e0be5ead94 = cache_frame_77cc24cc524dd488612769e0be5ead94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_77cc24cc524dd488612769e0be5ead94);
    assert(Py_REFCNT(frame_77cc24cc524dd488612769e0be5ead94) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[3];
        frame_77cc24cc524dd488612769e0be5ead94->m_frame.f_lineno = 65;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 65;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_77cc24cc524dd488612769e0be5ead94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77cc24cc524dd488612769e0be5ead94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77cc24cc524dd488612769e0be5ead94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77cc24cc524dd488612769e0be5ead94,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_77cc24cc524dd488612769e0be5ead94 == cache_frame_77cc24cc524dd488612769e0be5ead94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_77cc24cc524dd488612769e0be5ead94);
        cache_frame_77cc24cc524dd488612769e0be5ead94 = NULL;
    }

    assertFrameObject(frame_77cc24cc524dd488612769e0be5ead94);

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


static PyObject *impl_httpx$_exceptions$$$function__3_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_72f5c83143aa1115be3222530fc278ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_72f5c83143aa1115be3222530fc278ff = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_72f5c83143aa1115be3222530fc278ff)) {
        Py_XDECREF(cache_frame_72f5c83143aa1115be3222530fc278ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72f5c83143aa1115be3222530fc278ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72f5c83143aa1115be3222530fc278ff = MAKE_FUNCTION_FRAME(tstate, codeobj_72f5c83143aa1115be3222530fc278ff, module_httpx$_exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72f5c83143aa1115be3222530fc278ff->m_type_description == NULL);
    frame_72f5c83143aa1115be3222530fc278ff = cache_frame_72f5c83143aa1115be3222530fc278ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_72f5c83143aa1115be3222530fc278ff);
    assert(Py_REFCNT(frame_72f5c83143aa1115be3222530fc278ff) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_request);
        tmp_assattr_value_1 = par_request;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_72f5c83143aa1115be3222530fc278ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72f5c83143aa1115be3222530fc278ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72f5c83143aa1115be3222530fc278ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72f5c83143aa1115be3222530fc278ff,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_72f5c83143aa1115be3222530fc278ff == cache_frame_72f5c83143aa1115be3222530fc278ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72f5c83143aa1115be3222530fc278ff);
        cache_frame_72f5c83143aa1115be3222530fc278ff = NULL;
    }

    assertFrameObject(frame_72f5c83143aa1115be3222530fc278ff);

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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *par_request = python_pars[2];
    struct Nuitka_FrameObject *frame_00222bacec058e5b3cffb74e62fcc34e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_00222bacec058e5b3cffb74e62fcc34e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00222bacec058e5b3cffb74e62fcc34e)) {
        Py_XDECREF(cache_frame_00222bacec058e5b3cffb74e62fcc34e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00222bacec058e5b3cffb74e62fcc34e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00222bacec058e5b3cffb74e62fcc34e = MAKE_FUNCTION_FRAME(tstate, codeobj_00222bacec058e5b3cffb74e62fcc34e, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00222bacec058e5b3cffb74e62fcc34e->m_type_description == NULL);
    frame_00222bacec058e5b3cffb74e62fcc34e = cache_frame_00222bacec058e5b3cffb74e62fcc34e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_00222bacec058e5b3cffb74e62fcc34e);
    assert(Py_REFCNT(frame_00222bacec058e5b3cffb74e62fcc34e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 81;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_00222bacec058e5b3cffb74e62fcc34e->m_frame.f_lineno = 81;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_request);
        tmp_assattr_value_1 = par_request;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00222bacec058e5b3cffb74e62fcc34e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00222bacec058e5b3cffb74e62fcc34e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00222bacec058e5b3cffb74e62fcc34e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00222bacec058e5b3cffb74e62fcc34e,
        type_description_1,
        par_self,
        par_message,
        par_request,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_00222bacec058e5b3cffb74e62fcc34e == cache_frame_00222bacec058e5b3cffb74e62fcc34e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00222bacec058e5b3cffb74e62fcc34e);
        cache_frame_00222bacec058e5b3cffb74e62fcc34e = NULL;
    }

    assertFrameObject(frame_00222bacec058e5b3cffb74e62fcc34e);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_response = python_pars[3];
    struct Nuitka_FrameObject *frame_6f5f0ea6539939a3cc286041aa93cc2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6f5f0ea6539939a3cc286041aa93cc2e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f5f0ea6539939a3cc286041aa93cc2e)) {
        Py_XDECREF(cache_frame_6f5f0ea6539939a3cc286041aa93cc2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f5f0ea6539939a3cc286041aa93cc2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f5f0ea6539939a3cc286041aa93cc2e = MAKE_FUNCTION_FRAME(tstate, codeobj_6f5f0ea6539939a3cc286041aa93cc2e, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f5f0ea6539939a3cc286041aa93cc2e->m_type_description == NULL);
    frame_6f5f0ea6539939a3cc286041aa93cc2e = cache_frame_6f5f0ea6539939a3cc286041aa93cc2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6f5f0ea6539939a3cc286041aa93cc2e);
    assert(Py_REFCNT(frame_6f5f0ea6539939a3cc286041aa93cc2e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 236;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_6f5f0ea6539939a3cc286041aa93cc2e->m_frame.f_lineno = 236;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_request);
        tmp_assattr_value_1 = par_request;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_response);
        tmp_assattr_value_2 = par_response;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f5f0ea6539939a3cc286041aa93cc2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f5f0ea6539939a3cc286041aa93cc2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f5f0ea6539939a3cc286041aa93cc2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f5f0ea6539939a3cc286041aa93cc2e,
        type_description_1,
        par_self,
        par_message,
        par_request,
        par_response,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6f5f0ea6539939a3cc286041aa93cc2e == cache_frame_6f5f0ea6539939a3cc286041aa93cc2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f5f0ea6539939a3cc286041aa93cc2e);
        cache_frame_6f5f0ea6539939a3cc286041aa93cc2e = NULL;
    }

    assertFrameObject(frame_6f5f0ea6539939a3cc286041aa93cc2e);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_4667a017d655214941a4e34f959a1a1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4667a017d655214941a4e34f959a1a1f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4667a017d655214941a4e34f959a1a1f)) {
        Py_XDECREF(cache_frame_4667a017d655214941a4e34f959a1a1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4667a017d655214941a4e34f959a1a1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4667a017d655214941a4e34f959a1a1f = MAKE_FUNCTION_FRAME(tstate, codeobj_4667a017d655214941a4e34f959a1a1f, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4667a017d655214941a4e34f959a1a1f->m_type_description == NULL);
    frame_4667a017d655214941a4e34f959a1a1f = cache_frame_4667a017d655214941a4e34f959a1a1f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4667a017d655214941a4e34f959a1a1f);
    assert(Py_REFCNT(frame_4667a017d655214941a4e34f959a1a1f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 247;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_4667a017d655214941a4e34f959a1a1f->m_frame.f_lineno = 247;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4667a017d655214941a4e34f959a1a1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4667a017d655214941a4e34f959a1a1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4667a017d655214941a4e34f959a1a1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4667a017d655214941a4e34f959a1a1f,
        type_description_1,
        par_self,
        par_message,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4667a017d655214941a4e34f959a1a1f == cache_frame_4667a017d655214941a4e34f959a1a1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4667a017d655214941a4e34f959a1a1f);
        cache_frame_4667a017d655214941a4e34f959a1a1f = NULL;
    }

    assertFrameObject(frame_4667a017d655214941a4e34f959a1a1f);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_e394bf37a0b051daebc4caf0e65ddc63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e394bf37a0b051daebc4caf0e65ddc63 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e394bf37a0b051daebc4caf0e65ddc63)) {
        Py_XDECREF(cache_frame_e394bf37a0b051daebc4caf0e65ddc63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e394bf37a0b051daebc4caf0e65ddc63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e394bf37a0b051daebc4caf0e65ddc63 = MAKE_FUNCTION_FRAME(tstate, codeobj_e394bf37a0b051daebc4caf0e65ddc63, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e394bf37a0b051daebc4caf0e65ddc63->m_type_description == NULL);
    frame_e394bf37a0b051daebc4caf0e65ddc63 = cache_frame_e394bf37a0b051daebc4caf0e65ddc63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e394bf37a0b051daebc4caf0e65ddc63);
    assert(Py_REFCNT(frame_e394bf37a0b051daebc4caf0e65ddc63) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 258;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_e394bf37a0b051daebc4caf0e65ddc63->m_frame.f_lineno = 258;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e394bf37a0b051daebc4caf0e65ddc63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e394bf37a0b051daebc4caf0e65ddc63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e394bf37a0b051daebc4caf0e65ddc63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e394bf37a0b051daebc4caf0e65ddc63,
        type_description_1,
        par_self,
        par_message,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e394bf37a0b051daebc4caf0e65ddc63 == cache_frame_e394bf37a0b051daebc4caf0e65ddc63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e394bf37a0b051daebc4caf0e65ddc63);
        cache_frame_e394bf37a0b051daebc4caf0e65ddc63 = NULL;
    }

    assertFrameObject(frame_e394bf37a0b051daebc4caf0e65ddc63);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_2e0d5c81cf5e09959aebe4e87b7c4378;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378)) {
        Py_XDECREF(cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378 = MAKE_FUNCTION_FRAME(tstate, codeobj_2e0d5c81cf5e09959aebe4e87b7c4378, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378->m_type_description == NULL);
    frame_2e0d5c81cf5e09959aebe4e87b7c4378 = cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2e0d5c81cf5e09959aebe4e87b7c4378);
    assert(Py_REFCNT(frame_2e0d5c81cf5e09959aebe4e87b7c4378) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 276;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_2e0d5c81cf5e09959aebe4e87b7c4378->m_frame.f_lineno = 276;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e0d5c81cf5e09959aebe4e87b7c4378, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e0d5c81cf5e09959aebe4e87b7c4378->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e0d5c81cf5e09959aebe4e87b7c4378, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e0d5c81cf5e09959aebe4e87b7c4378,
        type_description_1,
        par_self,
        par_message,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2e0d5c81cf5e09959aebe4e87b7c4378 == cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378);
        cache_frame_2e0d5c81cf5e09959aebe4e87b7c4378 = NULL;
    }

    assertFrameObject(frame_2e0d5c81cf5e09959aebe4e87b7c4378);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_exceptions$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_326cf7a209e7f11b4b229e4751c8a530;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_326cf7a209e7f11b4b229e4751c8a530 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_326cf7a209e7f11b4b229e4751c8a530)) {
        Py_XDECREF(cache_frame_326cf7a209e7f11b4b229e4751c8a530);

#if _DEBUG_REFCOUNTS
        if (cache_frame_326cf7a209e7f11b4b229e4751c8a530 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_326cf7a209e7f11b4b229e4751c8a530 = MAKE_FUNCTION_FRAME(tstate, codeobj_326cf7a209e7f11b4b229e4751c8a530, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_326cf7a209e7f11b4b229e4751c8a530->m_type_description == NULL);
    frame_326cf7a209e7f11b4b229e4751c8a530 = cache_frame_326cf7a209e7f11b4b229e4751c8a530;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_326cf7a209e7f11b4b229e4751c8a530);
    assert(Py_REFCNT(frame_326cf7a209e7f11b4b229e4751c8a530) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        frame_326cf7a209e7f11b4b229e4751c8a530->m_frame.f_lineno = 294;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[6], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_326cf7a209e7f11b4b229e4751c8a530, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_326cf7a209e7f11b4b229e4751c8a530->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_326cf7a209e7f11b4b229e4751c8a530, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_326cf7a209e7f11b4b229e4751c8a530,
        type_description_1,
        par_self,
        NULL,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_326cf7a209e7f11b4b229e4751c8a530 == cache_frame_326cf7a209e7f11b4b229e4751c8a530) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_326cf7a209e7f11b4b229e4751c8a530);
        cache_frame_326cf7a209e7f11b4b229e4751c8a530 = NULL;
    }

    assertFrameObject(frame_326cf7a209e7f11b4b229e4751c8a530);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_httpx$_exceptions$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8bde5baf5239545cbb5074ab8f9326c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8bde5baf5239545cbb5074ab8f9326c5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8bde5baf5239545cbb5074ab8f9326c5)) {
        Py_XDECREF(cache_frame_8bde5baf5239545cbb5074ab8f9326c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bde5baf5239545cbb5074ab8f9326c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bde5baf5239545cbb5074ab8f9326c5 = MAKE_FUNCTION_FRAME(tstate, codeobj_8bde5baf5239545cbb5074ab8f9326c5, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8bde5baf5239545cbb5074ab8f9326c5->m_type_description == NULL);
    frame_8bde5baf5239545cbb5074ab8f9326c5 = cache_frame_8bde5baf5239545cbb5074ab8f9326c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8bde5baf5239545cbb5074ab8f9326c5);
    assert(Py_REFCNT(frame_8bde5baf5239545cbb5074ab8f9326c5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 307;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        frame_8bde5baf5239545cbb5074ab8f9326c5->m_frame.f_lineno = 307;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bde5baf5239545cbb5074ab8f9326c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bde5baf5239545cbb5074ab8f9326c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bde5baf5239545cbb5074ab8f9326c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bde5baf5239545cbb5074ab8f9326c5,
        type_description_1,
        par_self,
        NULL,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8bde5baf5239545cbb5074ab8f9326c5 == cache_frame_8bde5baf5239545cbb5074ab8f9326c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8bde5baf5239545cbb5074ab8f9326c5);
        cache_frame_8bde5baf5239545cbb5074ab8f9326c5 = NULL;
    }

    assertFrameObject(frame_8bde5baf5239545cbb5074ab8f9326c5);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_httpx$_exceptions$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0338e1ff256d149877678ce6f22fd432;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0338e1ff256d149877678ce6f22fd432 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0338e1ff256d149877678ce6f22fd432)) {
        Py_XDECREF(cache_frame_0338e1ff256d149877678ce6f22fd432);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0338e1ff256d149877678ce6f22fd432 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0338e1ff256d149877678ce6f22fd432 = MAKE_FUNCTION_FRAME(tstate, codeobj_0338e1ff256d149877678ce6f22fd432, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0338e1ff256d149877678ce6f22fd432->m_type_description == NULL);
    frame_0338e1ff256d149877678ce6f22fd432 = cache_frame_0338e1ff256d149877678ce6f22fd432;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0338e1ff256d149877678ce6f22fd432);
    assert(Py_REFCNT(frame_0338e1ff256d149877678ce6f22fd432) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 317;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        frame_0338e1ff256d149877678ce6f22fd432->m_frame.f_lineno = 317;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0338e1ff256d149877678ce6f22fd432, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0338e1ff256d149877678ce6f22fd432->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0338e1ff256d149877678ce6f22fd432, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0338e1ff256d149877678ce6f22fd432,
        type_description_1,
        par_self,
        NULL,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0338e1ff256d149877678ce6f22fd432 == cache_frame_0338e1ff256d149877678ce6f22fd432) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0338e1ff256d149877678ce6f22fd432);
        cache_frame_0338e1ff256d149877678ce6f22fd432 = NULL;
    }

    assertFrameObject(frame_0338e1ff256d149877678ce6f22fd432);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_httpx$_exceptions$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ea459418fcb307f445e18b0e633004af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea459418fcb307f445e18b0e633004af = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea459418fcb307f445e18b0e633004af)) {
        Py_XDECREF(cache_frame_ea459418fcb307f445e18b0e633004af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea459418fcb307f445e18b0e633004af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea459418fcb307f445e18b0e633004af = MAKE_FUNCTION_FRAME(tstate, codeobj_ea459418fcb307f445e18b0e633004af, module_httpx$_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea459418fcb307f445e18b0e633004af->m_type_description == NULL);
    frame_ea459418fcb307f445e18b0e633004af = cache_frame_ea459418fcb307f445e18b0e633004af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ea459418fcb307f445e18b0e633004af);
    assert(Py_REFCNT(frame_ea459418fcb307f445e18b0e633004af) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 327;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_httpx$_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        frame_ea459418fcb307f445e18b0e633004af->m_frame.f_lineno = 327;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oNc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea459418fcb307f445e18b0e633004af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea459418fcb307f445e18b0e633004af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea459418fcb307f445e18b0e633004af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea459418fcb307f445e18b0e633004af,
        type_description_1,
        par_self,
        NULL,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ea459418fcb307f445e18b0e633004af == cache_frame_ea459418fcb307f445e18b0e633004af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea459418fcb307f445e18b0e633004af);
        cache_frame_ea459418fcb307f445e18b0e633004af = NULL;
    }

    assertFrameObject(frame_ea459418fcb307f445e18b0e633004af);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

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


static PyObject *impl_httpx$_exceptions$$$function__13_request_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_request = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_request;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals {
    PyObject *var_exc;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};
#endif

static PyObject *httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals *generator_heap = (struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_exc = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_9de3f967fecae5998b8892a8d2a8eb49, module_httpx$_exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_1 = Py_None;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 339;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_1;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 340;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(generator_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->var_exc = tmp_assign_source_1;
    }
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[4]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 341;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[4]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 342;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_3;
        }

        tmp_assattr_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_exc);
        tmp_assattr_target_1 = generator_heap->var_exc;
        generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 342;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_3;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        if (generator_heap->var_exc == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 343;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_3;
        }

        tmp_raise_type_1 = generator_heap->var_exc;
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_lineno = 343;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "co";
        goto try_except_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_exc);
    generator_heap->var_exc = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 338;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator_heap->var_exc
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_context,
        module_httpx$_exceptions,
        mod_consts[13],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_9de3f967fecae5998b8892a8d2a8eb49,
        closure,
        1,
#if 1
        sizeof(struct httpx$_exceptions$$$function__13_request_context$$$genobj__1_request_context_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__10___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__10___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_8bde5baf5239545cbb5074ab8f9326c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__11___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__11___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_0338e1ff256d149877678ce6f22fd432,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__12___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__12___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_ea459418fcb307f445e18b0e633004af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__13_request_context(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__13_request_context,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9de3f967fecae5998b8892a8d2a8eb49,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__1___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_4343b47980624c647970385c2d3b991f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__2_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__2_request,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_77cc24cc524dd488612769e0be5ead94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__3_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__3_request,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_72f5c83143aa1115be3222530fc278ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__4___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__4___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_00222bacec058e5b3cffb74e62fcc34e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__5___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__5___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_6f5f0ea6539939a3cc286041aa93cc2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__6___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__6___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_4667a017d655214941a4e34f959a1a1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__7___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__7___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_e394bf37a0b051daebc4caf0e65ddc63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__8___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__8___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_2e0d5c81cf5e09959aebe4e87b7c4378,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_exceptions$$$function__9___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_exceptions$$$function__9___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_326cf7a209e7f11b4b229e4751c8a530,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_exceptions,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_httpx$_exceptions[] = {
    impl_httpx$_exceptions$$$function__1___init__,
    impl_httpx$_exceptions$$$function__2_request,
    impl_httpx$_exceptions$$$function__3_request,
    impl_httpx$_exceptions$$$function__4___init__,
    impl_httpx$_exceptions$$$function__5___init__,
    impl_httpx$_exceptions$$$function__6___init__,
    impl_httpx$_exceptions$$$function__7___init__,
    impl_httpx$_exceptions$$$function__8___init__,
    impl_httpx$_exceptions$$$function__9___init__,
    impl_httpx$_exceptions$$$function__10___init__,
    impl_httpx$_exceptions$$$function__11___init__,
    impl_httpx$_exceptions$$$function__12___init__,
    impl_httpx$_exceptions$$$function__13_request_context,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_httpx$_exceptions);

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
        module_httpx$_exceptions,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_httpx$_exceptions,
        sizeof(function_table_httpx$_exceptions) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_httpx$_exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_exceptions");

    // Store the module for future use.
    module_httpx$_exceptions = module;

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
        PRINT_STRING("httpx$_exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpx$_exceptions\n");

    moduledict_httpx$_exceptions = MODULE_DICT(module_httpx$_exceptions);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[125]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_exceptions);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    struct Nuitka_CellObject *outline_20_var___class__ = NULL;
    struct Nuitka_CellObject *outline_21_var___class__ = NULL;
    struct Nuitka_CellObject *outline_22_var___class__ = NULL;
    struct Nuitka_CellObject *outline_23_var___class__ = NULL;
    struct Nuitka_CellObject *outline_24_var___class__ = NULL;
    struct Nuitka_CellObject *outline_25_var___class__ = NULL;
    struct Nuitka_CellObject *outline_26_var___class__ = NULL;
    struct Nuitka_CellObject *outline_27_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__bases_orig = NULL;
    PyObject *tmp_class_creation_25__class_decl_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_25__prepared = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__bases_orig = NULL;
    PyObject *tmp_class_creation_26__class_decl_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_26__prepared = NULL;
    PyObject *tmp_class_creation_27__bases = NULL;
    PyObject *tmp_class_creation_27__bases_orig = NULL;
    PyObject *tmp_class_creation_27__class_decl_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_27__prepared = NULL;
    PyObject *tmp_class_creation_28__bases = NULL;
    PyObject *tmp_class_creation_28__bases_orig = NULL;
    PyObject *tmp_class_creation_28__class_decl_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_28__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_5152aa3dd4fecc186fb5f3d8568a9a27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_httpx$_exceptions$$$class__1_HTTPError_40 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d7f38080b2990df9370f7f052aa71ac1_2;
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
    PyObject *locals_httpx$_exceptions$$$class__2_RequestError_73 = NULL;
    struct Nuitka_FrameObject *frame_188398a5efb0af580b3736627f5ac1c7_3;
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
    PyObject *locals_httpx$_exceptions$$$class__3_TransportError_91 = NULL;
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
    PyObject *locals_httpx$_exceptions$$$class__4_TimeoutException_100 = NULL;
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
    PyObject *locals_httpx$_exceptions$$$class__5_ConnectTimeout_108 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_httpx$_exceptions$$$class__6_ReadTimeout_114 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_httpx$_exceptions$$$class__7_WriteTimeout_120 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_httpx$_exceptions$$$class__8_PoolTimeout_126 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_httpx$_exceptions$$$class__9_NetworkError_135 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_httpx$_exceptions$$$class__10_ReadError_143 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_httpx$_exceptions$$$class__11_WriteError_149 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_httpx$_exceptions$$$class__12_ConnectError_155 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *locals_httpx$_exceptions$$$class__13_CloseError_161 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_httpx$_exceptions$$$class__14_ProxyError_170 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176 = NULL;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *locals_httpx$_exceptions$$$class__16_ProtocolError_184 = NULL;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *locals_httpx$_exceptions$$$class__17_LocalProtocolError_190 = NULL;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200 = NULL;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *locals_httpx$_exceptions$$$class__19_DecodingError_211 = NULL;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *locals_httpx$_exceptions$$$class__20_TooManyRedirects_217 = NULL;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *locals_httpx$_exceptions$$$class__21_HTTPStatusError_226 = NULL;
    struct Nuitka_FrameObject *frame_0aae47afeb9b9ecd9ee21e410f479dd7_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *locals_httpx$_exceptions$$$class__22_InvalidURL_241 = NULL;
    struct Nuitka_FrameObject *frame_a0291e208987054b9ec09f3adb3fb6b7_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *locals_httpx$_exceptions$$$class__23_CookieConflict_250 = NULL;
    struct Nuitka_FrameObject *frame_8d28d3ec9d257ac632d002fd12ae51b3_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *locals_httpx$_exceptions$$$class__24_StreamError_267 = NULL;
    struct Nuitka_FrameObject *frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *locals_httpx$_exceptions$$$class__25_StreamConsumed_279 = NULL;
    struct Nuitka_FrameObject *frame_0532c4c85e08234ad1552272e66270fe_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *locals_httpx$_exceptions$$$class__26_StreamClosed_297 = NULL;
    struct Nuitka_FrameObject *frame_9cc5c6ab9ab235c89456523df931ea4e_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    PyObject *locals_httpx$_exceptions$$$class__27_ResponseNotRead_310 = NULL;
    struct Nuitka_FrameObject *frame_50cfe5d411864287b34ce6371e7a490f_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
    PyObject *locals_httpx$_exceptions$$$class__28_RequestNotRead_320 = NULL;
    struct Nuitka_FrameObject *frame_7a6ba2d6ad663d701a599a8ce71f384f_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_82;
    PyObject *exception_keeper_value_82;
    PyTracebackObject *exception_keeper_tb_82;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
    PyObject *exception_keeper_type_83;
    PyObject *exception_keeper_value_83;
    PyTracebackObject *exception_keeper_tb_83;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_83;
    PyObject *exception_keeper_type_84;
    PyObject *exception_keeper_value_84;
    PyTracebackObject *exception_keeper_tb_84;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_84;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_2);
    }
    frame_5152aa3dd4fecc186fb5f3d8568a9a27 = MAKE_MODULE_FRAME(codeobj_5152aa3dd4fecc186fb5f3d8568a9a27, module_httpx$_exceptions);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5152aa3dd4fecc186fb5f3d8568a9a27);
    assert(Py_REFCNT(frame_5152aa3dd4fecc186fb5f3d8568a9a27) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[17]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[17]);

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
        UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_exceptions;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[22];
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 33;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_5);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[24];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_6 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[22];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_8 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[26];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 40;
        tmp_assign_source_9 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[29];
        tmp_default_value_1 = mod_consts[30];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[29]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 40;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_11;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpx$_exceptions$$$class__1_HTTPError_40 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[26];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_3;
        }
        frame_d7f38080b2990df9370f7f052aa71ac1_2 = MAKE_CLASS_FRAME(tstate, codeobj_d7f38080b2990df9370f7f052aa71ac1, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d7f38080b2990df9370f7f052aa71ac1_2);
        assert(Py_REFCNT(frame_d7f38080b2990df9370f7f052aa71ac1_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_1 = mod_consts[35];
            tmp_dict_value_1 = PyObject_GetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[36]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__1___init__(tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[39]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[39]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[39]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = DICT_COPY(mod_consts[40]);


            tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_exceptions$$$function__2_request(tmp_annotations_2);

            frame_d7f38080b2990df9370f7f052aa71ac1_2->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_annotations_3 = DICT_COPY(mod_consts[40]);


            tmp_args_element_value_2 = MAKE_FUNCTION_httpx$_exceptions$$$function__2_request(tmp_annotations_3);

            frame_d7f38080b2990df9370f7f052aa71ac1_2->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_4;
            tmp_called_instance_1 = PyObject_GetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[4]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 68;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = DICT_COPY(mod_consts[43]);


            tmp_args_element_value_3 = MAKE_FUNCTION_httpx$_exceptions$$$function__3_request(tmp_annotations_4);

            frame_d7f38080b2990df9370f7f052aa71ac1_2->m_frame.f_lineno = 68;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[42], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d7f38080b2990df9370f7f052aa71ac1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d7f38080b2990df9370f7f052aa71ac1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d7f38080b2990df9370f7f052aa71ac1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d7f38080b2990df9370f7f052aa71ac1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d7f38080b2990df9370f7f052aa71ac1_2);

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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[24];
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__1_HTTPError_40, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[26];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_httpx$_exceptions$$$class__1_HTTPError_40;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 40;
            tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_3;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_12);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_11 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_httpx$_exceptions$$$class__1_HTTPError_40);
        locals_httpx$_exceptions$$$class__1_HTTPError_40 = NULL;
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

        Py_DECREF(locals_httpx$_exceptions$$$class__1_HTTPError_40);
        locals_httpx$_exceptions$$$class__1_HTTPError_40 = NULL;
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
        exception_lineno = 40;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_11);
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_assign_source_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_14 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[22];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[25]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = mod_consts[11];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 73;
        tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_3 = mod_consts[29];
        tmp_default_value_2 = mod_consts[30];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_3, tmp_default_value_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[29]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 73;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_18;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_19;
        outline_1_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpx$_exceptions$$$class__2_RequestError_73 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_73, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_73, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[11];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_73, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        frame_188398a5efb0af580b3736627f5ac1c7_3 = MAKE_CLASS_FRAME(tstate, codeobj_188398a5efb0af580b3736627f5ac1c7, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_188398a5efb0af580b3736627f5ac1c7_3);
        assert(Py_REFCNT(frame_188398a5efb0af580b3736627f5ac1c7_3) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[46]);
            tmp_dict_key_2 = mod_consts[35];
            tmp_dict_value_2 = PyObject_GetItem(locals_httpx$_exceptions$$$class__2_RequestError_73, mod_consts[36]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_3;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[4];
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                assert(!(tmp_expression_value_14 == NULL));
                tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[47]);
                if (tmp_expression_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_3 = mod_consts[48];
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[37];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_kw_defaults_1);
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__4___init__(tmp_kw_defaults_1, tmp_annotations_5, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_73, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_188398a5efb0af580b3736627f5ac1c7_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_188398a5efb0af580b3736627f5ac1c7_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_188398a5efb0af580b3736627f5ac1c7_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_188398a5efb0af580b3736627f5ac1c7_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_188398a5efb0af580b3736627f5ac1c7_3);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__2_RequestError_73, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[11];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_httpx$_exceptions$$$class__2_RequestError_73;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 73;
            tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_20);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_19 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_httpx$_exceptions$$$class__2_RequestError_73);
        locals_httpx$_exceptions$$$class__2_RequestError_73 = NULL;
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

        Py_DECREF(locals_httpx$_exceptions$$$class__2_RequestError_73);
        locals_httpx$_exceptions$$$class__2_RequestError_73 = NULL;
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
        exception_lineno = 73;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_19);
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

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_22 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_15 = tmp_class_creation_3__bases;
        tmp_subscript_value_4 = mod_consts[22];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_4, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[25]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_tuple_element_9 = mod_consts[50];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_9 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 91;
        tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_18 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_name_value_4 = mod_consts[29];
        tmp_default_value_3 = mod_consts[30];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_4, tmp_default_value_3);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[29]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 91;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_httpx$_exceptions$$$class__3_TransportError_91 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_91, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_91, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_91, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__3_TransportError_91, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = mod_consts[50];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_httpx$_exceptions$$$class__3_TransportError_91;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 91;
            tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_27 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_httpx$_exceptions$$$class__3_TransportError_91);
        locals_httpx$_exceptions$$$class__3_TransportError_91 = NULL;
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

        Py_DECREF(locals_httpx$_exceptions$$$class__3_TransportError_91);
        locals_httpx$_exceptions$$$class__3_TransportError_91 = NULL;
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
        exception_lineno = 91;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_27);
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

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_30 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_21 = tmp_class_creation_4__bases;
        tmp_subscript_value_5 = mod_consts[22];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_22 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[25]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_tuple_element_13 = mod_consts[52];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_13 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 100;
        tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_24 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_25 = tmp_class_creation_4__metaclass;
        tmp_name_value_5 = mod_consts[29];
        tmp_default_value_4 = mod_consts[30];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_5, tmp_default_value_4);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_26 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[29]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 100;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_34;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_httpx$_exceptions$$$class__4_TimeoutException_100 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_100, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_100, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_100, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_12;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__4_TimeoutException_100, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_15 = mod_consts[52];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_httpx$_exceptions$$$class__4_TimeoutException_100;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 100;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_35 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_httpx$_exceptions$$$class__4_TimeoutException_100);
        locals_httpx$_exceptions$$$class__4_TimeoutException_100 = NULL;
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

        Py_DECREF(locals_httpx$_exceptions$$$class__4_TimeoutException_100);
        locals_httpx$_exceptions$$$class__4_TimeoutException_100 = NULL;
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
        exception_lineno = 100;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_35);
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

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_16;
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_16);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_38 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_27 = tmp_class_creation_5__bases;
        tmp_subscript_value_6 = mod_consts[22];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_6, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_28 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_29 = tmp_class_creation_5__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[25]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_tuple_element_17 = mod_consts[54];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_17 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 108;
        tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_30 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_31 = tmp_class_creation_5__metaclass;
        tmp_name_value_6 = mod_consts[29];
        tmp_default_value_5 = mod_consts[30];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_31, tmp_name_value_6, tmp_default_value_5);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_32 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[29]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 108;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_42;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_httpx$_exceptions$$$class__5_ConnectTimeout_108 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_108, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_108, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_108, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_15;
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__5_ConnectTimeout_108, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_12 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_19 = mod_consts[54];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_19 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_httpx$_exceptions$$$class__5_ConnectTimeout_108;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 108;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_43 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_httpx$_exceptions$$$class__5_ConnectTimeout_108);
        locals_httpx$_exceptions$$$class__5_ConnectTimeout_108 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__5_ConnectTimeout_108);
        locals_httpx$_exceptions$$$class__5_ConnectTimeout_108 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 108;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_43);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_20;
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_20);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_46 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_33 = tmp_class_creation_6__bases;
        tmp_subscript_value_7 = mod_consts[22];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_7, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_34 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_35 = tmp_class_creation_6__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[25]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        tmp_tuple_element_21 = mod_consts[56];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_21 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 114;
        tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_36 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_37 = tmp_class_creation_6__metaclass;
        tmp_name_value_7 = mod_consts[29];
        tmp_default_value_6 = mod_consts[30];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_7, tmp_default_value_6);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_38 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[29]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 114;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_50;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_httpx$_exceptions$$$class__6_ReadTimeout_114 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_114, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_114, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_114, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__6_ReadTimeout_114, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_14 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_23 = mod_consts[56];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_23 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_httpx$_exceptions$$$class__6_ReadTimeout_114;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 114;
            tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_51 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_httpx$_exceptions$$$class__6_ReadTimeout_114);
        locals_httpx$_exceptions$$$class__6_ReadTimeout_114 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__6_ReadTimeout_114);
        locals_httpx$_exceptions$$$class__6_ReadTimeout_114 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 114;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_51);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_assign_source_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_24);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_54 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_condition_result_26 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_39 = tmp_class_creation_7__bases;
        tmp_subscript_value_8 = mod_consts[22];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_8, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_40 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_41 = tmp_class_creation_7__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[25]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_tuple_element_25 = mod_consts[58];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_25 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 120;
        tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_42 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_28 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_43 = tmp_class_creation_7__metaclass;
        tmp_name_value_8 = mod_consts[29];
        tmp_default_value_7 = mod_consts[30];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_43, tmp_name_value_8, tmp_default_value_7);
        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_44;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_44 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_44 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[29]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 120;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_58;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_httpx$_exceptions$$$class__7_WriteTimeout_120 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_120, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_120, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_120, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_29 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__7_WriteTimeout_120, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_16 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_27 = mod_consts[58];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_27 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_httpx$_exceptions$$$class__7_WriteTimeout_120;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 120;
            tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_59 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_httpx$_exceptions$$$class__7_WriteTimeout_120);
        locals_httpx$_exceptions$$$class__7_WriteTimeout_120 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__7_WriteTimeout_120);
        locals_httpx$_exceptions$$$class__7_WriteTimeout_120 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 120;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_59);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_28;
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_28);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_62 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_30;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_condition_result_30 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_45 = tmp_class_creation_8__bases;
        tmp_subscript_value_9 = mod_consts[22];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_45, tmp_subscript_value_9, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_46 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_47 = tmp_class_creation_8__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[25]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_tuple_element_29 = mod_consts[60];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_29 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 126;
        tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_48 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_32 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_49 = tmp_class_creation_8__metaclass;
        tmp_name_value_9 = mod_consts[29];
        tmp_default_value_8 = mod_consts[30];
        tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_49, tmp_name_value_9, tmp_default_value_8);
        if (tmp_tuple_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_50;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_50 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_50 == NULL));
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[29]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 126;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_66;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_httpx$_exceptions$$$class__8_PoolTimeout_126 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_126, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_126, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[60];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_126, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_24;
        }
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_33 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_33 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__8_PoolTimeout_126, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto try_except_handler_24;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_18 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_31 = mod_consts[60];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_31 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_httpx$_exceptions$$$class__8_PoolTimeout_126;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 126;
            tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_67 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_httpx$_exceptions$$$class__8_PoolTimeout_126);
        locals_httpx$_exceptions$$$class__8_PoolTimeout_126 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__8_PoolTimeout_126);
        locals_httpx$_exceptions$$$class__8_PoolTimeout_126 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 126;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_67);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_32;
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_32 == NULL)) {
            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_tuple_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_assign_source_69 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_32);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_70 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_34;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_condition_result_34 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_51 = tmp_class_creation_9__bases;
        tmp_subscript_value_10 = mod_consts[22];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_10, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_52 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_condition_result_35 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_53 = tmp_class_creation_9__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[25]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_tuple_element_33 = mod_consts[62];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_33 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 135;
        tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_54 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_36 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_55 = tmp_class_creation_9__metaclass;
        tmp_name_value_10 = mod_consts[29];
        tmp_default_value_9 = mod_consts[30];
        tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_10, tmp_default_value_9);
        if (tmp_tuple_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_56 == NULL));
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[29]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 135;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_74;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_httpx$_exceptions$$$class__9_NetworkError_135 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_135, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_135, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_135, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_37 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__9_NetworkError_135, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_27;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_20 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_35 = mod_consts[62];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_35 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_httpx$_exceptions$$$class__9_NetworkError_135;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 135;
            tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_75 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_httpx$_exceptions$$$class__9_NetworkError_135);
        locals_httpx$_exceptions$$$class__9_NetworkError_135 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__9_NetworkError_135);
        locals_httpx$_exceptions$$$class__9_NetworkError_135 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 135;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_75);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_tuple_element_36;
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_36 == NULL)) {
            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        tmp_assign_source_77 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_77, 0, tmp_tuple_element_36);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_78 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        tmp_condition_result_38 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_57 = tmp_class_creation_10__bases;
        tmp_subscript_value_11 = mod_consts[22];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_11, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_58 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_59 = tmp_class_creation_10__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[25]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        tmp_tuple_element_37 = mod_consts[64];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_37 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 143;
        tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_60 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_40 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_61 = tmp_class_creation_10__metaclass;
        tmp_name_value_11 = mod_consts[29];
        tmp_default_value_10 = mod_consts[30];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_61, tmp_name_value_11, tmp_default_value_10);
        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_62;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_62 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[29]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 143;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_82;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_httpx$_exceptions$$$class__10_ReadError_143 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_143, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_143, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_143, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_30;
        }
        {
            nuitka_bool tmp_condition_result_41;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_41 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_41 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__10_ReadError_143, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_30;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_22 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_39 = mod_consts[64];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_39 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_httpx$_exceptions$$$class__10_ReadError_143;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 143;
            tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_83 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_httpx$_exceptions$$$class__10_ReadError_143);
        locals_httpx$_exceptions$$$class__10_ReadError_143 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__10_ReadError_143);
        locals_httpx$_exceptions$$$class__10_ReadError_143 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 143;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_83);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_tuple_element_40;
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_40 == NULL)) {
            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        tmp_assign_source_85 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_85, 0, tmp_tuple_element_40);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_86 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_42;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        tmp_condition_result_42 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_63 = tmp_class_creation_11__bases;
        tmp_subscript_value_12 = mod_consts[22];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_63, tmp_subscript_value_12, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_88 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_64 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_65 = tmp_class_creation_11__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[25]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        tmp_tuple_element_41 = mod_consts[66];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_41 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 149;
        tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_89;
    }
    {
        bool tmp_condition_result_44;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_66 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_44 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_67 = tmp_class_creation_11__metaclass;
        tmp_name_value_12 = mod_consts[29];
        tmp_default_value_11 = mod_consts[30];
        tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_67, tmp_name_value_12, tmp_default_value_11);
        if (tmp_tuple_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_68;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_68 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_68 == NULL));
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[29]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 149;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_90;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_91;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_httpx$_exceptions$$$class__11_WriteError_149 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_149, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_149, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_149, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        {
            nuitka_bool tmp_condition_result_45;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_45 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_45 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_33;
            }
            if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__11_WriteError_149, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_33;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_24 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_43 = mod_consts[66];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_43 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
            tmp_tuple_element_43 = locals_httpx$_exceptions$$$class__11_WriteError_149;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 149;
            tmp_assign_source_92 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_92;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_91 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_91);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_httpx$_exceptions$$$class__11_WriteError_149);
        locals_httpx$_exceptions$$$class__11_WriteError_149 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__11_WriteError_149);
        locals_httpx$_exceptions$$$class__11_WriteError_149 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 149;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_91);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_tuple_element_44;
        tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_44 == NULL)) {
            tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        tmp_assign_source_93 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_93, 0, tmp_tuple_element_44);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_94 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_46;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        tmp_condition_result_46 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_69 = tmp_class_creation_12__bases;
        tmp_subscript_value_13 = mod_consts[22];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_69, tmp_subscript_value_13, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_96 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_96;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_70 = tmp_class_creation_12__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        tmp_condition_result_47 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_71 = tmp_class_creation_12__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[25]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        tmp_tuple_element_45 = mod_consts[68];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_45 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 155;
        tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_48;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_72 = tmp_class_creation_12__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_72, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_48 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_73 = tmp_class_creation_12__metaclass;
        tmp_name_value_13 = mod_consts[29];
        tmp_default_value_12 = mod_consts[30];
        tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_73, tmp_name_value_13, tmp_default_value_12);
        if (tmp_tuple_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_74;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_74 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_74 == NULL));
            tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[29]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_34;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 155;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_34;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_98;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_99;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_httpx$_exceptions$$$class__12_ConnectError_155 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_155, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_155, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_155, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_36;
        }
        {
            nuitka_bool tmp_condition_result_49;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_49 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_49 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto try_except_handler_36;
            }
            if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__12_ConnectError_155, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_36;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_26 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_47 = mod_consts[68];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_47 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = locals_httpx$_exceptions$$$class__12_ConnectError_155;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 155;
            tmp_assign_source_100 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto try_except_handler_36;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_100;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_99 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_99);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_httpx$_exceptions$$$class__12_ConnectError_155);
        locals_httpx$_exceptions$$$class__12_ConnectError_155 = NULL;
        goto try_return_handler_35;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__12_ConnectError_155);
        locals_httpx$_exceptions$$$class__12_ConnectError_155 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto try_except_handler_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 155;
        goto try_except_handler_34;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_99);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_tuple_element_48;
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_48 == NULL)) {
            tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        tmp_assign_source_101 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_101, 0, tmp_tuple_element_48);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_102 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        tmp_condition_result_50 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_75 = tmp_class_creation_13__bases;
        tmp_subscript_value_14 = mod_consts[22];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_14, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_104 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_104;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_76 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        tmp_condition_result_51 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_77 = tmp_class_creation_13__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[25]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        tmp_tuple_element_49 = mod_consts[70];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_49 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 161;
        tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_105;
    }
    {
        bool tmp_condition_result_52;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_78 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_52 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_79 = tmp_class_creation_13__metaclass;
        tmp_name_value_14 = mod_consts[29];
        tmp_default_value_13 = mod_consts[30];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_79, tmp_name_value_14, tmp_default_value_13);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_80 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[29]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_37;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_37;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 161;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_37;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_106;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_107;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_httpx$_exceptions$$$class__13_CloseError_161 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_161, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_161, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_161, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_39;
        }
        {
            nuitka_bool tmp_condition_result_53;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_53 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_53 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto try_except_handler_39;
            }
            if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__13_CloseError_161, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_39;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_28 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_51 = mod_consts[70];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_51 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_httpx$_exceptions$$$class__13_CloseError_161;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 161;
            tmp_assign_source_108 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto try_except_handler_39;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_108;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_107 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_107);
        goto try_return_handler_39;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF(locals_httpx$_exceptions$$$class__13_CloseError_161);
        locals_httpx$_exceptions$$$class__13_CloseError_161 = NULL;
        goto try_return_handler_38;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__13_CloseError_161);
        locals_httpx$_exceptions$$$class__13_CloseError_161 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_38;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 161;
        goto try_except_handler_37;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_107);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_tuple_element_52;
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_52 == NULL)) {
            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        tmp_assign_source_109 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_109, 0, tmp_tuple_element_52);
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_dircall_arg1_14;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_110 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_110;
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_54;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        tmp_condition_result_54 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_81 = tmp_class_creation_14__bases;
        tmp_subscript_value_15 = mod_consts[22];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_81, tmp_subscript_value_15, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_112 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_112;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_expression_value_82;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_82 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        tmp_condition_result_55 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_83 = tmp_class_creation_14__metaclass;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[25]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        tmp_tuple_element_53 = mod_consts[72];
        tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_53 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 170;
        tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_113;
    }
    {
        bool tmp_condition_result_56;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_84 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_56 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_56 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_85 = tmp_class_creation_14__metaclass;
        tmp_name_value_15 = mod_consts[29];
        tmp_default_value_14 = mod_consts[30];
        tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_85, tmp_name_value_15, tmp_default_value_14);
        if (tmp_tuple_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_86;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_value_86 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_86 == NULL));
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[29]);
            Py_DECREF(tmp_expression_value_86);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_40;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_40;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 170;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_40;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_114;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_115;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_httpx$_exceptions$$$class__14_ProxyError_170 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_170, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_42;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_170, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_42;
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_170, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_42;
        }
        {
            nuitka_bool tmp_condition_result_57;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_cmp_expr_right_14 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_57 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_57 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_42;
            }
            if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__14_ProxyError_170, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_42;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_116;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_30 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_55 = mod_consts[72];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_55 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_httpx$_exceptions$$$class__14_ProxyError_170;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 170;
            tmp_assign_source_116 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_42;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_116;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_115 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_115);
        goto try_return_handler_42;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        Py_DECREF(locals_httpx$_exceptions$$$class__14_ProxyError_170);
        locals_httpx$_exceptions$$$class__14_ProxyError_170 = NULL;
        goto try_return_handler_41;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__14_ProxyError_170);
        locals_httpx$_exceptions$$$class__14_ProxyError_170 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto try_except_handler_41;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 170;
        goto try_except_handler_40;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_115);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_tuple_element_56;
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        tmp_assign_source_117 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_117, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_dircall_arg1_15;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_118 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_118;
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_119;
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_metaclass_value_15;
        nuitka_bool tmp_condition_result_58;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        tmp_condition_result_58 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_87 = tmp_class_creation_15__bases;
        tmp_subscript_value_16 = mod_consts[22];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_87, tmp_subscript_value_16, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_16:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_120 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_120;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_88 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        tmp_condition_result_59 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_89 = tmp_class_creation_15__metaclass;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[25]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        tmp_tuple_element_57 = mod_consts[74];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_57 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 176;
        tmp_assign_source_121 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_121;
    }
    {
        bool tmp_condition_result_60;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_90;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_90 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_60 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_60 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_91 = tmp_class_creation_15__metaclass;
        tmp_name_value_16 = mod_consts[29];
        tmp_default_value_15 = mod_consts[30];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_91, tmp_name_value_16, tmp_default_value_15);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_92;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_value_92 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_92 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[29]);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_43;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 176;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_43;
    }
    branch_no_44:;
    goto branch_end_43;
    branch_no_43:;
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_122;
    }
    branch_end_43:;
    {
        PyObject *tmp_assign_source_123;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_45;
        }
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_45;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_45;
        }
        {
            nuitka_bool tmp_condition_result_61;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_61 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_61 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_45;
            }
            if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_45;
        }
        branch_no_45:;
        {
            PyObject *tmp_assign_source_124;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_32 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_59 = mod_consts[74];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_59 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 176;
            tmp_assign_source_124 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_45;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_124;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_123 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_123);
        goto try_return_handler_45;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        Py_DECREF(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176);
        locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176 = NULL;
        goto try_return_handler_44;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176);
        locals_httpx$_exceptions$$$class__15_UnsupportedProtocol_176 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto try_except_handler_44;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 176;
        goto try_except_handler_43;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_123);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_tuple_element_60;
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_60 == NULL)) {
            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_tuple_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        tmp_assign_source_125 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_125, 0, tmp_tuple_element_60);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_dircall_arg1_16;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_126 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_126;
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_127;
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_metaclass_value_16;
        nuitka_bool tmp_condition_result_62;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        tmp_condition_result_62 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_93 = tmp_class_creation_16__bases;
        tmp_subscript_value_17 = mod_consts[22];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_93, tmp_subscript_value_17, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_128 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_128;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_94 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        tmp_condition_result_63 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_95 = tmp_class_creation_16__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[25]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        tmp_tuple_element_61 = mod_consts[76];
        tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_61 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 184;
        tmp_assign_source_129 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_129;
    }
    {
        bool tmp_condition_result_64;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_96 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_96, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_64 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_64 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_97 = tmp_class_creation_16__metaclass;
        tmp_name_value_17 = mod_consts[29];
        tmp_default_value_16 = mod_consts[30];
        tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_97, tmp_name_value_17, tmp_default_value_16);
        if (tmp_tuple_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_98;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_value_98 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_98 == NULL));
            tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[29]);
            Py_DECREF(tmp_expression_value_98);
            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_62);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_46;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_46;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 184;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_46;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_130;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_131;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_httpx$_exceptions$$$class__16_ProtocolError_184 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_184, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_48;
        }
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_184, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_48;
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_184, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_48;
        }
        {
            nuitka_bool tmp_condition_result_65;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_16 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_65 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_65 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_48;
            }
            if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__16_ProtocolError_184, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_48;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_132;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_34 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_63 = mod_consts[76];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_63 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = locals_httpx$_exceptions$$$class__16_ProtocolError_184;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 184;
            tmp_assign_source_132 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto try_except_handler_48;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_132;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_131 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_131);
        goto try_return_handler_48;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF(locals_httpx$_exceptions$$$class__16_ProtocolError_184);
        locals_httpx$_exceptions$$$class__16_ProtocolError_184 = NULL;
        goto try_return_handler_47;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__16_ProtocolError_184);
        locals_httpx$_exceptions$$$class__16_ProtocolError_184 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto try_except_handler_47;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 184;
        goto try_except_handler_46;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_131);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_tuple_element_64;
        tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_tuple_element_64 == NULL)) {
            tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_tuple_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        tmp_assign_source_133 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_133, 0, tmp_tuple_element_64);
        assert(tmp_class_creation_17__bases_orig == NULL);
        tmp_class_creation_17__bases_orig = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_dircall_arg1_17;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_134 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_134;
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_metaclass_value_17;
        nuitka_bool tmp_condition_result_66;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_17;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        tmp_condition_result_66 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_99 = tmp_class_creation_17__bases;
        tmp_subscript_value_18 = mod_consts[22];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_99, tmp_subscript_value_18, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_17);
        condexpr_end_18:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_17 = tmp_class_creation_17__bases;
        tmp_assign_source_136 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_136;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_100 = tmp_class_creation_17__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        tmp_condition_result_67 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_101 = tmp_class_creation_17__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[25]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        tmp_tuple_element_65 = mod_consts[78];
        tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_65 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 190;
        tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_137;
    }
    {
        bool tmp_condition_result_68;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_102;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_102 = tmp_class_creation_17__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_102, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_68 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_68 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_mod_expr_left_17 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_103 = tmp_class_creation_17__metaclass;
        tmp_name_value_18 = mod_consts[29];
        tmp_default_value_17 = mod_consts[30];
        tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_103, tmp_name_value_18, tmp_default_value_17);
        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_104;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_34 = tmp_class_creation_17__prepared;
            tmp_expression_value_104 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_value_104 == NULL));
            tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[29]);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_raise_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_49;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 190;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_49;
    }
    branch_no_50:;
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_138;
    }
    branch_end_49:;
    {
        PyObject *tmp_assign_source_139;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_httpx$_exceptions$$$class__17_LocalProtocolError_190 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_190, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_51;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_190, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_51;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_190, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_51;
        }
        {
            nuitka_bool tmp_condition_result_69;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_17__bases;
            CHECK_OBJECT(tmp_class_creation_17__bases_orig);
            tmp_cmp_expr_right_17 = tmp_class_creation_17__bases_orig;
            tmp_condition_result_69 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_69 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto try_except_handler_51;
            }
            if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
                goto branch_yes_51;
            } else {
                goto branch_no_51;
            }
        }
        branch_yes_51:;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dictset_value = tmp_class_creation_17__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__17_LocalProtocolError_190, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto try_except_handler_51;
        }
        branch_no_51:;
        {
            PyObject *tmp_assign_source_140;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_36 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_67 = mod_consts[78];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_67 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = locals_httpx$_exceptions$$$class__17_LocalProtocolError_190;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 190;
            tmp_assign_source_140 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto try_except_handler_51;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_140;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_assign_source_139 = outline_16_var___class__;
        Py_INCREF(tmp_assign_source_139);
        goto try_return_handler_51;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF(locals_httpx$_exceptions$$$class__17_LocalProtocolError_190);
        locals_httpx$_exceptions$$$class__17_LocalProtocolError_190 = NULL;
        goto try_return_handler_50;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__17_LocalProtocolError_190);
        locals_httpx$_exceptions$$$class__17_LocalProtocolError_190 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto try_except_handler_50;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 190;
        goto try_except_handler_49;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_139);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_17__bases_orig);
    Py_DECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_tuple_element_68;
        tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_tuple_element_68 == NULL)) {
            tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_tuple_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        tmp_assign_source_141 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_141, 0, tmp_tuple_element_68);
        assert(tmp_class_creation_18__bases_orig == NULL);
        tmp_class_creation_18__bases_orig = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_dircall_arg1_18;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_142 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_metaclass_value_18;
        nuitka_bool tmp_condition_result_70;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_18;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        tmp_condition_result_70 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_105 = tmp_class_creation_18__bases;
        tmp_subscript_value_19 = mod_consts[22];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_105, tmp_subscript_value_19, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_18);
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_18 = tmp_class_creation_18__bases;
        tmp_assign_source_144 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_144;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_expression_value_106;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_106 = tmp_class_creation_18__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        tmp_condition_result_71 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_kwargs_value_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_107 = tmp_class_creation_18__metaclass;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[25]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        tmp_tuple_element_69 = mod_consts[80];
        tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_69 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 200;
        tmp_assign_source_145 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_value_35);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_145;
    }
    {
        bool tmp_condition_result_72;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_108;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_108 = tmp_class_creation_18__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_108, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_72 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_72 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_mod_expr_left_18 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_109 = tmp_class_creation_18__metaclass;
        tmp_name_value_19 = mod_consts[29];
        tmp_default_value_18 = mod_consts[30];
        tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_109, tmp_name_value_19, tmp_default_value_18);
        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_110;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_36 = tmp_class_creation_18__prepared;
            tmp_expression_value_110 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_value_110 == NULL));
            tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[29]);
            Py_DECREF(tmp_expression_value_110);
            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_18);
        goto try_except_handler_52;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        Py_DECREF(tmp_mod_expr_right_18);
        if (tmp_raise_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_52;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 200;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_52;
    }
    branch_no_53:;
    goto branch_end_52;
    branch_no_52:;
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_146;
    }
    branch_end_52:;
    {
        PyObject *tmp_assign_source_147;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_54;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_54;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_54;
        }
        {
            nuitka_bool tmp_condition_result_73;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_18__bases;
            CHECK_OBJECT(tmp_class_creation_18__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_18__bases_orig;
            tmp_condition_result_73 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_73 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto try_except_handler_54;
            }
            if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
                goto branch_yes_54;
            } else {
                goto branch_no_54;
            }
        }
        branch_yes_54:;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dictset_value = tmp_class_creation_18__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_54;
        }
        branch_no_54:;
        {
            PyObject *tmp_assign_source_148;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_38 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_71 = mod_consts[80];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_71 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 200;
            tmp_assign_source_148 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto try_except_handler_54;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_148;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_assign_source_147 = outline_17_var___class__;
        Py_INCREF(tmp_assign_source_147);
        goto try_return_handler_54;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        Py_DECREF(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200);
        locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200 = NULL;
        goto try_return_handler_53;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200);
        locals_httpx$_exceptions$$$class__18_RemoteProtocolError_200 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto try_except_handler_53;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 200;
        goto try_except_handler_52;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_147);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_18__bases_orig);
    Py_DECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_tuple_element_72;
        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_72 == NULL)) {
            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        tmp_assign_source_149 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_149, 0, tmp_tuple_element_72);
        assert(tmp_class_creation_19__bases_orig == NULL);
        tmp_class_creation_19__bases_orig = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_dircall_arg1_19;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_150 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_150;
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_metaclass_value_19;
        nuitka_bool tmp_condition_result_74;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_19;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_19 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        tmp_condition_result_74 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_111 = tmp_class_creation_19__bases;
        tmp_subscript_value_20 = mod_consts[22];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_111, tmp_subscript_value_20, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_19);
        condexpr_end_20:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_19 = tmp_class_creation_19__bases;
        tmp_assign_source_152 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_152;
    }
    {
        bool tmp_condition_result_75;
        PyObject *tmp_expression_value_112;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_112 = tmp_class_creation_19__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        tmp_condition_result_75 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_75 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_args_value_37;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_kwargs_value_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_113 = tmp_class_creation_19__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[25]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        tmp_tuple_element_73 = mod_consts[82];
        tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_73 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 211;
        tmp_assign_source_153 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_37, tmp_kwargs_value_37);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_37);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_153;
    }
    {
        bool tmp_condition_result_76;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_114;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_114 = tmp_class_creation_19__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_114, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_76 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_76 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_mod_expr_left_19 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_115 = tmp_class_creation_19__metaclass;
        tmp_name_value_20 = mod_consts[29];
        tmp_default_value_19 = mod_consts[30];
        tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_115, tmp_name_value_20, tmp_default_value_19);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_116;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_38 = tmp_class_creation_19__prepared;
            tmp_expression_value_116 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_value_116 == NULL));
            tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[29]);
            Py_DECREF(tmp_expression_value_116);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto try_except_handler_55;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_raise_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_55;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 211;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_55;
    }
    branch_no_56:;
    goto branch_end_55;
    branch_no_55:;
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_154;
    }
    branch_end_55:;
    {
        PyObject *tmp_assign_source_155;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_httpx$_exceptions$$$class__19_DecodingError_211 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_211, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_57;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_211, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_57;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_211, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_57;
        }
        {
            nuitka_bool tmp_condition_result_77;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_cmp_expr_left_19 = tmp_class_creation_19__bases;
            CHECK_OBJECT(tmp_class_creation_19__bases_orig);
            tmp_cmp_expr_right_19 = tmp_class_creation_19__bases_orig;
            tmp_condition_result_77 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            if (tmp_condition_result_77 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto try_except_handler_57;
            }
            if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
                goto branch_yes_57;
            } else {
                goto branch_no_57;
            }
        }
        branch_yes_57:;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dictset_value = tmp_class_creation_19__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__19_DecodingError_211, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto try_except_handler_57;
        }
        branch_no_57:;
        {
            PyObject *tmp_assign_source_156;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_40 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_75 = mod_consts[82];
            tmp_args_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_75 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = locals_httpx$_exceptions$$$class__19_DecodingError_211;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 211;
            tmp_assign_source_156 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_156 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto try_except_handler_57;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_156;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_assign_source_155 = outline_18_var___class__;
        Py_INCREF(tmp_assign_source_155);
        goto try_return_handler_57;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        Py_DECREF(locals_httpx$_exceptions$$$class__19_DecodingError_211);
        locals_httpx$_exceptions$$$class__19_DecodingError_211 = NULL;
        goto try_return_handler_56;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__19_DecodingError_211);
        locals_httpx$_exceptions$$$class__19_DecodingError_211 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto try_except_handler_56;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 211;
        goto try_except_handler_55;
        outline_result_19:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_155);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_19__bases_orig);
    Py_DECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_tuple_element_76;
        tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_76 == NULL)) {
            tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        tmp_assign_source_157 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_157, 0, tmp_tuple_element_76);
        assert(tmp_class_creation_20__bases_orig == NULL);
        tmp_class_creation_20__bases_orig = tmp_assign_source_157;
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_dircall_arg1_20;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dircall_arg1_20 = tmp_class_creation_20__bases_orig;
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_158 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_158;
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_metaclass_value_20;
        nuitka_bool tmp_condition_result_78;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_20;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_20 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        tmp_condition_result_78 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_78 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_117 = tmp_class_creation_20__bases;
        tmp_subscript_value_21 = mod_consts[22];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_117, tmp_subscript_value_21, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_20);
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_20 = tmp_class_creation_20__bases;
        tmp_assign_source_160 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_160;
    }
    {
        bool tmp_condition_result_79;
        PyObject *tmp_expression_value_118;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_118 = tmp_class_creation_20__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        tmp_condition_result_79 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_79 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_kwargs_value_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_119 = tmp_class_creation_20__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[25]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        tmp_tuple_element_77 = mod_consts[84];
        tmp_args_value_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_77 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 217;
        tmp_assign_source_161 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_39, tmp_kwargs_value_39);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_39);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_161;
    }
    {
        bool tmp_condition_result_80;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_120;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_120 = tmp_class_creation_20__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_120, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_80 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_80 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_mod_expr_left_20 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_121 = tmp_class_creation_20__metaclass;
        tmp_name_value_21 = mod_consts[29];
        tmp_default_value_20 = mod_consts[30];
        tmp_tuple_element_78 = BUILTIN_GETATTR(tstate, tmp_expression_value_121, tmp_name_value_21, tmp_default_value_20);
        if (tmp_tuple_element_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_122;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_40 = tmp_class_creation_20__prepared;
            tmp_expression_value_122 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_value_122 == NULL));
            tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[29]);
            Py_DECREF(tmp_expression_value_122);
            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto try_except_handler_58;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_raise_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_58;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 217;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_58;
    }
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_162;
    }
    branch_end_58:;
    {
        PyObject *tmp_assign_source_163;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_httpx$_exceptions$$$class__20_TooManyRedirects_217 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_217, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_60;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_217, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_60;
        }
        tmp_dictset_value = mod_consts[84];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_217, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_60;
        }
        {
            nuitka_bool tmp_condition_result_81;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_cmp_expr_left_20 = tmp_class_creation_20__bases;
            CHECK_OBJECT(tmp_class_creation_20__bases_orig);
            tmp_cmp_expr_right_20 = tmp_class_creation_20__bases_orig;
            tmp_condition_result_81 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            if (tmp_condition_result_81 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto try_except_handler_60;
            }
            if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
                goto branch_yes_60;
            } else {
                goto branch_no_60;
            }
        }
        branch_yes_60:;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dictset_value = tmp_class_creation_20__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__20_TooManyRedirects_217, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_60;
        }
        branch_no_60:;
        {
            PyObject *tmp_assign_source_164;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_kwargs_value_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_42 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_79 = mod_consts[84];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_79 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_79);
            tmp_tuple_element_79 = locals_httpx$_exceptions$$$class__20_TooManyRedirects_217;
            PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 217;
            tmp_assign_source_164 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_40, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_40);
            if (tmp_assign_source_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto try_except_handler_60;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_164;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_163 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_163);
        goto try_return_handler_60;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        Py_DECREF(locals_httpx$_exceptions$$$class__20_TooManyRedirects_217);
        locals_httpx$_exceptions$$$class__20_TooManyRedirects_217 = NULL;
        goto try_return_handler_59;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__20_TooManyRedirects_217);
        locals_httpx$_exceptions$$$class__20_TooManyRedirects_217 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto try_except_handler_59;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_59:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 217;
        goto try_except_handler_58;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_163);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_20__bases_orig);
    Py_DECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_tuple_element_80;
        tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_80 == NULL)) {
            tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_tuple_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        tmp_assign_source_165 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_165, 0, tmp_tuple_element_80);
        assert(tmp_class_creation_21__bases_orig == NULL);
        tmp_class_creation_21__bases_orig = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_dircall_arg1_21;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dircall_arg1_21 = tmp_class_creation_21__bases_orig;
        Py_INCREF(tmp_dircall_arg1_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
            tmp_assign_source_166 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_167;
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_metaclass_value_21;
        nuitka_bool tmp_condition_result_82;
        int tmp_truth_name_21;
        PyObject *tmp_type_arg_41;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_21;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_creation_21__bases);
        if (tmp_truth_name_21 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        tmp_condition_result_82 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_82 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_123 = tmp_class_creation_21__bases;
        tmp_subscript_value_22 = mod_consts[22];
        tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_123, tmp_subscript_value_22, 0);
        if (tmp_type_arg_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
        Py_DECREF(tmp_type_arg_41);
        if (tmp_metaclass_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_21);
        condexpr_end_22:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_21 = tmp_class_creation_21__bases;
        tmp_assign_source_168 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_168;
    }
    {
        bool tmp_condition_result_83;
        PyObject *tmp_expression_value_124;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_124 = tmp_class_creation_21__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        tmp_condition_result_83 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_83 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_kwargs_value_41;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_125 = tmp_class_creation_21__metaclass;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[25]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        tmp_tuple_element_81 = mod_consts[86];
        tmp_args_value_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_81 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 226;
        tmp_assign_source_169 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_value_41);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_169;
    }
    {
        bool tmp_condition_result_84;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_126;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_126 = tmp_class_creation_21__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_126, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_84 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_84 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_mod_expr_left_21 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_127 = tmp_class_creation_21__metaclass;
        tmp_name_value_22 = mod_consts[29];
        tmp_default_value_21 = mod_consts[30];
        tmp_tuple_element_82 = BUILTIN_GETATTR(tstate, tmp_expression_value_127, tmp_name_value_22, tmp_default_value_21);
        if (tmp_tuple_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_128;
            PyObject *tmp_type_arg_42;
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_42 = tmp_class_creation_21__prepared;
            tmp_expression_value_128 = BUILTIN_TYPE1(tmp_type_arg_42);
            assert(!(tmp_expression_value_128 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[29]);
            Py_DECREF(tmp_expression_value_128);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_21);
        goto try_except_handler_61;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        Py_DECREF(tmp_mod_expr_right_21);
        if (tmp_raise_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_61;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 226;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_61;
    }
    branch_no_62:;
    goto branch_end_61;
    branch_no_61:;
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_170;
    }
    branch_end_61:;
    {
        PyObject *tmp_assign_source_171;
        outline_20_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_httpx$_exceptions$$$class__21_HTTPStatusError_226 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_63;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_63;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_63;
        }
        frame_0aae47afeb9b9ecd9ee21e410f479dd7_4 = MAKE_CLASS_FRAME(tstate, codeobj_0aae47afeb9b9ecd9ee21e410f479dd7, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0aae47afeb9b9ecd9ee21e410f479dd7_4);
        assert(Py_REFCNT(frame_0aae47afeb9b9ecd9ee21e410f479dd7_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_dict_key_3 = mod_consts[35];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226, mod_consts[36]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[4];
            tmp_dict_value_3 = mod_consts[48];
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[5];
            tmp_dict_value_3 = mod_consts[88];
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[37];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));

            tmp_closure_3[0] = outline_20_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__5___init__(tmp_annotations_6, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0aae47afeb9b9ecd9ee21e410f479dd7_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0aae47afeb9b9ecd9ee21e410f479dd7_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0aae47afeb9b9ecd9ee21e410f479dd7_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0aae47afeb9b9ecd9ee21e410f479dd7_4,
            type_description_2,
            outline_20_var___class__
        );



        assertFrameObject(frame_0aae47afeb9b9ecd9ee21e410f479dd7_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_63;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_85;
            PyObject *tmp_cmp_expr_left_21;
            PyObject *tmp_cmp_expr_right_21;
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_cmp_expr_left_21 = tmp_class_creation_21__bases;
            CHECK_OBJECT(tmp_class_creation_21__bases_orig);
            tmp_cmp_expr_right_21 = tmp_class_creation_21__bases_orig;
            tmp_condition_result_85 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
            if (tmp_condition_result_85 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto try_except_handler_63;
            }
            if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
                goto branch_yes_63;
            } else {
                goto branch_no_63;
            }
        }
        branch_yes_63:;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dictset_value = tmp_class_creation_21__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_63;
        }
        branch_no_63:;
        {
            PyObject *tmp_assign_source_172;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_kwargs_value_42;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_44 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_83 = mod_consts[86];
            tmp_args_value_42 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_83 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_83);
            tmp_tuple_element_83 = locals_httpx$_exceptions$$$class__21_HTTPStatusError_226;
            PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_42 = tmp_class_creation_21__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 226;
            tmp_assign_source_172 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_42, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_42);
            if (tmp_assign_source_172 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto try_except_handler_63;
            }
            assert(Nuitka_Cell_GET(outline_20_var___class__) == NULL);
            PyCell_SET(outline_20_var___class__, tmp_assign_source_172);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_20_var___class__));
        tmp_assign_source_171 = Nuitka_Cell_GET(outline_20_var___class__);
        Py_INCREF(tmp_assign_source_171);
        goto try_return_handler_63;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        Py_DECREF(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226);
        locals_httpx$_exceptions$$$class__21_HTTPStatusError_226 = NULL;
        goto try_return_handler_62;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__21_HTTPStatusError_226);
        locals_httpx$_exceptions$$$class__21_HTTPStatusError_226 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto try_except_handler_62;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_62:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_62 = exception_type;
        exception_keeper_value_62 = exception_value;
        exception_keeper_tb_62 = exception_tb;
        exception_keeper_lineno_62 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_62;
        exception_value = exception_keeper_value_62;
        exception_tb = exception_keeper_tb_62;
        exception_lineno = exception_keeper_lineno_62;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 226;
        goto try_except_handler_61;
        outline_result_21:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_171);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_21__bases_orig);
    Py_DECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_dircall_arg1_22;
        tmp_dircall_arg1_22 = mod_consts[24];
        Py_INCREF(tmp_dircall_arg1_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
            tmp_assign_source_173 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        assert(tmp_class_creation_22__bases == NULL);
        tmp_class_creation_22__bases = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_174;
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_metaclass_value_22;
        nuitka_bool tmp_condition_result_86;
        int tmp_truth_name_22;
        PyObject *tmp_type_arg_43;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_bases_value_22;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_creation_22__bases);
        if (tmp_truth_name_22 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        tmp_condition_result_86 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_expression_value_129 = tmp_class_creation_22__bases;
        tmp_subscript_value_23 = mod_consts[22];
        tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_129, tmp_subscript_value_23, 0);
        if (tmp_type_arg_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
        Py_DECREF(tmp_type_arg_43);
        if (tmp_metaclass_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_22);
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_bases_value_22 = tmp_class_creation_22__bases;
        tmp_assign_source_175 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
        Py_DECREF(tmp_metaclass_value_22);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_175;
    }
    {
        bool tmp_condition_result_87;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_130 = tmp_class_creation_22__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        tmp_condition_result_87 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_args_value_43;
        PyObject *tmp_tuple_element_84;
        PyObject *tmp_kwargs_value_43;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_131 = tmp_class_creation_22__metaclass;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[25]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        tmp_tuple_element_84 = mod_consts[90];
        tmp_args_value_43 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_tuple_element_84 = tmp_class_creation_22__bases;
        PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_kwargs_value_43 = tmp_class_creation_22__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 241;
        tmp_assign_source_176 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_43, tmp_kwargs_value_43);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_value_43);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_176;
    }
    {
        bool tmp_condition_result_88;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_expression_value_132;
        CHECK_OBJECT(tmp_class_creation_22__prepared);
        tmp_expression_value_132 = tmp_class_creation_22__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_132, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_88 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_88 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_raise_value_22;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_name_value_23;
        PyObject *tmp_default_value_22;
        tmp_raise_type_22 = PyExc_TypeError;
        tmp_mod_expr_left_22 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_133 = tmp_class_creation_22__metaclass;
        tmp_name_value_23 = mod_consts[29];
        tmp_default_value_22 = mod_consts[30];
        tmp_tuple_element_85 = BUILTIN_GETATTR(tstate, tmp_expression_value_133, tmp_name_value_23, tmp_default_value_22);
        if (tmp_tuple_element_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_134;
            PyObject *tmp_type_arg_44;
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_type_arg_44 = tmp_class_creation_22__prepared;
            tmp_expression_value_134 = BUILTIN_TYPE1(tmp_type_arg_44);
            assert(!(tmp_expression_value_134 == NULL));
            tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[29]);
            Py_DECREF(tmp_expression_value_134);
            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_85);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_22);
        goto try_except_handler_64;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        Py_DECREF(tmp_mod_expr_right_22);
        if (tmp_raise_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_64;
        }
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_value = tmp_raise_value_22;
        exception_lineno = 241;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_64;
    }
    branch_no_65:;
    goto branch_end_64;
    branch_no_64:;
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_177;
    }
    branch_end_64:;
    {
        PyObject *tmp_assign_source_178;
        outline_21_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_httpx$_exceptions$$$class__22_InvalidURL_241 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_241, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_66;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_241, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_66;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_241, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_66;
        }
        frame_a0291e208987054b9ec09f3adb3fb6b7_5 = MAKE_CLASS_FRAME(tstate, codeobj_a0291e208987054b9ec09f3adb3fb6b7, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a0291e208987054b9ec09f3adb3fb6b7_5);
        assert(Py_REFCNT(frame_a0291e208987054b9ec09f3adb3fb6b7_5) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_dict_key_4 = mod_consts[35];
            tmp_dict_value_4 = PyObject_GetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_241, mod_consts[36]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[37];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));

            tmp_closure_4[0] = outline_21_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__6___init__(tmp_annotations_7, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_241, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a0291e208987054b9ec09f3adb3fb6b7_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a0291e208987054b9ec09f3adb3fb6b7_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a0291e208987054b9ec09f3adb3fb6b7_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a0291e208987054b9ec09f3adb3fb6b7_5,
            type_description_2,
            outline_21_var___class__
        );



        assertFrameObject(frame_a0291e208987054b9ec09f3adb3fb6b7_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_66;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_89;
            PyObject *tmp_cmp_expr_left_22;
            PyObject *tmp_cmp_expr_right_22;
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_cmp_expr_left_22 = tmp_class_creation_22__bases;
            tmp_cmp_expr_right_22 = mod_consts[24];
            tmp_condition_result_89 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
            if (tmp_condition_result_89 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto try_except_handler_66;
            }
            if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
                goto branch_yes_66;
            } else {
                goto branch_no_66;
            }
        }
        branch_yes_66:;
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__22_InvalidURL_241, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_66;
        }
        branch_no_66:;
        {
            PyObject *tmp_assign_source_179;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_kwargs_value_44;
            CHECK_OBJECT(tmp_class_creation_22__metaclass);
            tmp_called_value_46 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_86 = mod_consts[90];
            tmp_args_value_44 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_tuple_element_86 = tmp_class_creation_22__bases;
            PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_86);
            tmp_tuple_element_86 = locals_httpx$_exceptions$$$class__22_InvalidURL_241;
            PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_44 = tmp_class_creation_22__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 241;
            tmp_assign_source_179 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_44, tmp_kwargs_value_44);
            Py_DECREF(tmp_args_value_44);
            if (tmp_assign_source_179 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto try_except_handler_66;
            }
            assert(Nuitka_Cell_GET(outline_21_var___class__) == NULL);
            PyCell_SET(outline_21_var___class__, tmp_assign_source_179);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_21_var___class__));
        tmp_assign_source_178 = Nuitka_Cell_GET(outline_21_var___class__);
        Py_INCREF(tmp_assign_source_178);
        goto try_return_handler_66;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_66:;
        Py_DECREF(locals_httpx$_exceptions$$$class__22_InvalidURL_241);
        locals_httpx$_exceptions$$$class__22_InvalidURL_241 = NULL;
        goto try_return_handler_65;
        // Exception handler code:
        try_except_handler_66:;
        exception_keeper_type_64 = exception_type;
        exception_keeper_value_64 = exception_value;
        exception_keeper_tb_64 = exception_tb;
        exception_keeper_lineno_64 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__22_InvalidURL_241);
        locals_httpx$_exceptions$$$class__22_InvalidURL_241 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_64;
        exception_value = exception_keeper_value_64;
        exception_tb = exception_keeper_tb_64;
        exception_lineno = exception_keeper_lineno_64;

        goto try_except_handler_65;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_65:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_65;
        exception_value = exception_keeper_value_65;
        exception_tb = exception_keeper_tb_65;
        exception_lineno = exception_keeper_lineno_65;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 241;
        goto try_except_handler_64;
        outline_result_22:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_178);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    Py_XDECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_22__bases);
    Py_DECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_dircall_arg1_23;
        tmp_dircall_arg1_23 = mod_consts[24];
        Py_INCREF(tmp_dircall_arg1_23);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
            tmp_assign_source_180 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        assert(tmp_class_creation_23__bases == NULL);
        tmp_class_creation_23__bases = tmp_assign_source_180;
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__class_decl_dict == NULL);
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_metaclass_value_23;
        nuitka_bool tmp_condition_result_90;
        int tmp_truth_name_23;
        PyObject *tmp_type_arg_45;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_bases_value_23;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_creation_23__bases);
        if (tmp_truth_name_23 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        tmp_condition_result_90 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_90 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_expression_value_135 = tmp_class_creation_23__bases;
        tmp_subscript_value_24 = mod_consts[22];
        tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_135, tmp_subscript_value_24, 0);
        if (tmp_type_arg_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
        Py_DECREF(tmp_type_arg_45);
        if (tmp_metaclass_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_23);
        condexpr_end_24:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_bases_value_23 = tmp_class_creation_23__bases;
        tmp_assign_source_182 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
        Py_DECREF(tmp_metaclass_value_23);
        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        assert(tmp_class_creation_23__metaclass == NULL);
        tmp_class_creation_23__metaclass = tmp_assign_source_182;
    }
    {
        bool tmp_condition_result_91;
        PyObject *tmp_expression_value_136;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_136 = tmp_class_creation_23__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        tmp_condition_result_91 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_91 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_args_value_45;
        PyObject *tmp_tuple_element_87;
        PyObject *tmp_kwargs_value_45;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_137 = tmp_class_creation_23__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[25]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        tmp_tuple_element_87 = mod_consts[93];
        tmp_args_value_45 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_87);
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_tuple_element_87 = tmp_class_creation_23__bases;
        PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_87);
        CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
        tmp_kwargs_value_45 = tmp_class_creation_23__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 250;
        tmp_assign_source_183 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_45, tmp_kwargs_value_45);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_45);
        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_183;
    }
    {
        bool tmp_condition_result_92;
        PyObject *tmp_operand_value_23;
        PyObject *tmp_expression_value_138;
        CHECK_OBJECT(tmp_class_creation_23__prepared);
        tmp_expression_value_138 = tmp_class_creation_23__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_138, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_92 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_92 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_raise_type_23;
        PyObject *tmp_raise_value_23;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        PyObject *tmp_tuple_element_88;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_name_value_24;
        PyObject *tmp_default_value_23;
        tmp_raise_type_23 = PyExc_TypeError;
        tmp_mod_expr_left_23 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_139 = tmp_class_creation_23__metaclass;
        tmp_name_value_24 = mod_consts[29];
        tmp_default_value_23 = mod_consts[30];
        tmp_tuple_element_88 = BUILTIN_GETATTR(tstate, tmp_expression_value_139, tmp_name_value_24, tmp_default_value_23);
        if (tmp_tuple_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_140;
            PyObject *tmp_type_arg_46;
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_88);
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_type_arg_46 = tmp_class_creation_23__prepared;
            tmp_expression_value_140 = BUILTIN_TYPE1(tmp_type_arg_46);
            assert(!(tmp_expression_value_140 == NULL));
            tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[29]);
            Py_DECREF(tmp_expression_value_140);
            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_88);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_23);
        goto try_except_handler_67;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        Py_DECREF(tmp_mod_expr_right_23);
        if (tmp_raise_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_67;
        }
        exception_type = tmp_raise_type_23;
        Py_INCREF(tmp_raise_type_23);
        exception_value = tmp_raise_value_23;
        exception_lineno = 250;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_67;
    }
    branch_no_68:;
    goto branch_end_67;
    branch_no_67:;
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_184;
    }
    branch_end_67:;
    {
        PyObject *tmp_assign_source_185;
        outline_22_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_httpx$_exceptions$$$class__23_CookieConflict_250 = tmp_set_locals_23;
            Py_INCREF(tmp_set_locals_23);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_250, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_69;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_250, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_69;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_250, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_69;
        }
        frame_8d28d3ec9d257ac632d002fd12ae51b3_6 = MAKE_CLASS_FRAME(tstate, codeobj_8d28d3ec9d257ac632d002fd12ae51b3, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8d28d3ec9d257ac632d002fd12ae51b3_6);
        assert(Py_REFCNT(frame_8d28d3ec9d257ac632d002fd12ae51b3_6) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_dict_key_5 = mod_consts[35];
            tmp_dict_value_5 = PyObject_GetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_250, mod_consts[36]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[37];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));

            tmp_closure_5[0] = outline_22_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__7___init__(tmp_annotations_8, tmp_closure_5);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_250, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8d28d3ec9d257ac632d002fd12ae51b3_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8d28d3ec9d257ac632d002fd12ae51b3_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8d28d3ec9d257ac632d002fd12ae51b3_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8d28d3ec9d257ac632d002fd12ae51b3_6,
            type_description_2,
            outline_22_var___class__
        );



        assertFrameObject(frame_8d28d3ec9d257ac632d002fd12ae51b3_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_69;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_93;
            PyObject *tmp_cmp_expr_left_23;
            PyObject *tmp_cmp_expr_right_23;
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_cmp_expr_left_23 = tmp_class_creation_23__bases;
            tmp_cmp_expr_right_23 = mod_consts[24];
            tmp_condition_result_93 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
            if (tmp_condition_result_93 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_69;
            }
            if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
                goto branch_yes_69;
            } else {
                goto branch_no_69;
            }
        }
        branch_yes_69:;
        tmp_dictset_value = mod_consts[24];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__23_CookieConflict_250, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_69;
        }
        branch_no_69:;
        {
            PyObject *tmp_assign_source_186;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_46;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_kwargs_value_46;
            CHECK_OBJECT(tmp_class_creation_23__metaclass);
            tmp_called_value_48 = tmp_class_creation_23__metaclass;
            tmp_tuple_element_89 = mod_consts[93];
            tmp_args_value_46 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_89);
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_tuple_element_89 = tmp_class_creation_23__bases;
            PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_89);
            tmp_tuple_element_89 = locals_httpx$_exceptions$$$class__23_CookieConflict_250;
            PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_89);
            CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
            tmp_kwargs_value_46 = tmp_class_creation_23__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 250;
            tmp_assign_source_186 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_46, tmp_kwargs_value_46);
            Py_DECREF(tmp_args_value_46);
            if (tmp_assign_source_186 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_69;
            }
            assert(Nuitka_Cell_GET(outline_22_var___class__) == NULL);
            PyCell_SET(outline_22_var___class__, tmp_assign_source_186);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_22_var___class__));
        tmp_assign_source_185 = Nuitka_Cell_GET(outline_22_var___class__);
        Py_INCREF(tmp_assign_source_185);
        goto try_return_handler_69;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_69:;
        Py_DECREF(locals_httpx$_exceptions$$$class__23_CookieConflict_250);
        locals_httpx$_exceptions$$$class__23_CookieConflict_250 = NULL;
        goto try_return_handler_68;
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_67 = exception_type;
        exception_keeper_value_67 = exception_value;
        exception_keeper_tb_67 = exception_tb;
        exception_keeper_lineno_67 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__23_CookieConflict_250);
        locals_httpx$_exceptions$$$class__23_CookieConflict_250 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_67;
        exception_value = exception_keeper_value_67;
        exception_tb = exception_keeper_tb_67;
        exception_lineno = exception_keeper_lineno_67;

        goto try_except_handler_68;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_68:;
        CHECK_OBJECT(outline_22_var___class__);
        Py_DECREF(outline_22_var___class__);
        outline_22_var___class__ = NULL;
        goto outline_result_23;
        // Exception handler code:
        try_except_handler_68:;
        exception_keeper_type_68 = exception_type;
        exception_keeper_value_68 = exception_value;
        exception_keeper_tb_68 = exception_tb;
        exception_keeper_lineno_68 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_68;
        exception_value = exception_keeper_value_68;
        exception_tb = exception_keeper_tb_68;
        exception_lineno = exception_keeper_lineno_68;

        goto outline_exception_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_23:;
        exception_lineno = 250;
        goto try_except_handler_67;
        outline_result_23:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_185);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    Py_XDECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_23__bases);
    Py_DECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__metaclass);
    Py_DECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_dircall_arg1_24;
        tmp_dircall_arg1_24 = mod_consts[96];
        Py_INCREF(tmp_dircall_arg1_24);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_24};
            tmp_assign_source_187 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        assert(tmp_class_creation_24__bases == NULL);
        tmp_class_creation_24__bases = tmp_assign_source_187;
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__class_decl_dict == NULL);
        tmp_class_creation_24__class_decl_dict = tmp_assign_source_188;
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_metaclass_value_24;
        nuitka_bool tmp_condition_result_94;
        int tmp_truth_name_24;
        PyObject *tmp_type_arg_47;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_bases_value_24;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_creation_24__bases);
        if (tmp_truth_name_24 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        tmp_condition_result_94 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_expression_value_141 = tmp_class_creation_24__bases;
        tmp_subscript_value_25 = mod_consts[22];
        tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_141, tmp_subscript_value_25, 0);
        if (tmp_type_arg_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
        Py_DECREF(tmp_type_arg_47);
        if (tmp_metaclass_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_24);
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_bases_value_24 = tmp_class_creation_24__bases;
        tmp_assign_source_189 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
        Py_DECREF(tmp_metaclass_value_24);
        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        assert(tmp_class_creation_24__metaclass == NULL);
        tmp_class_creation_24__metaclass = tmp_assign_source_189;
    }
    {
        bool tmp_condition_result_95;
        PyObject *tmp_expression_value_142;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_142 = tmp_class_creation_24__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_142, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        tmp_condition_result_95 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_95 != false) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_args_value_47;
        PyObject *tmp_tuple_element_90;
        PyObject *tmp_kwargs_value_47;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_143 = tmp_class_creation_24__metaclass;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[25]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        tmp_tuple_element_90 = mod_consts[97];
        tmp_args_value_47 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_90);
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_tuple_element_90 = tmp_class_creation_24__bases;
        PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_90);
        CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
        tmp_kwargs_value_47 = tmp_class_creation_24__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 267;
        tmp_assign_source_190 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_47, tmp_kwargs_value_47);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_value_47);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_190;
    }
    {
        bool tmp_condition_result_96;
        PyObject *tmp_operand_value_24;
        PyObject *tmp_expression_value_144;
        CHECK_OBJECT(tmp_class_creation_24__prepared);
        tmp_expression_value_144 = tmp_class_creation_24__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_144, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_96 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_96 != false) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_raise_type_24;
        PyObject *tmp_raise_value_24;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        PyObject *tmp_tuple_element_91;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_name_value_25;
        PyObject *tmp_default_value_24;
        tmp_raise_type_24 = PyExc_TypeError;
        tmp_mod_expr_left_24 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_145 = tmp_class_creation_24__metaclass;
        tmp_name_value_25 = mod_consts[29];
        tmp_default_value_24 = mod_consts[30];
        tmp_tuple_element_91 = BUILTIN_GETATTR(tstate, tmp_expression_value_145, tmp_name_value_25, tmp_default_value_24);
        if (tmp_tuple_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_146;
            PyObject *tmp_type_arg_48;
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_91);
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_type_arg_48 = tmp_class_creation_24__prepared;
            tmp_expression_value_146 = BUILTIN_TYPE1(tmp_type_arg_48);
            assert(!(tmp_expression_value_146 == NULL));
            tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[29]);
            Py_DECREF(tmp_expression_value_146);
            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_91);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_24);
        goto try_except_handler_70;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        Py_DECREF(tmp_mod_expr_right_24);
        if (tmp_raise_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_70;
        }
        exception_type = tmp_raise_type_24;
        Py_INCREF(tmp_raise_type_24);
        exception_value = tmp_raise_value_24;
        exception_lineno = 267;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_70;
    }
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_191;
    }
    branch_end_70:;
    {
        PyObject *tmp_assign_source_192;
        outline_23_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_24;
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_set_locals_24 = tmp_class_creation_24__prepared;
            locals_httpx$_exceptions$$$class__24_StreamError_267 = tmp_set_locals_24;
            Py_INCREF(tmp_set_locals_24);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_267, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_72;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_267, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_72;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_267, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_72;
        }
        frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7 = MAKE_CLASS_FRAME(tstate, codeobj_16c9eaacc0956f3a9f4c8c9c6b1affa0, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7);
        assert(Py_REFCNT(frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_dict_key_6 = mod_consts[35];
            tmp_dict_value_6 = PyObject_GetItem(locals_httpx$_exceptions$$$class__24_StreamError_267, mod_consts[36]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[37];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));

            tmp_closure_6[0] = outline_23_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__8___init__(tmp_annotations_9, tmp_closure_6);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_267, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_2 = "c";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7,
            type_description_2,
            outline_23_var___class__
        );



        assertFrameObject(frame_16c9eaacc0956f3a9f4c8c9c6b1affa0_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_72;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_97;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_cmp_expr_left_24 = tmp_class_creation_24__bases;
            tmp_cmp_expr_right_24 = mod_consts[96];
            tmp_condition_result_97 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            if (tmp_condition_result_97 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto try_except_handler_72;
            }
            if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
                goto branch_yes_72;
            } else {
                goto branch_no_72;
            }
        }
        branch_yes_72:;
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__24_StreamError_267, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto try_except_handler_72;
        }
        branch_no_72:;
        {
            PyObject *tmp_assign_source_193;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_value_48;
            PyObject *tmp_tuple_element_92;
            PyObject *tmp_kwargs_value_48;
            CHECK_OBJECT(tmp_class_creation_24__metaclass);
            tmp_called_value_50 = tmp_class_creation_24__metaclass;
            tmp_tuple_element_92 = mod_consts[97];
            tmp_args_value_48 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_92);
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_tuple_element_92 = tmp_class_creation_24__bases;
            PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_92);
            tmp_tuple_element_92 = locals_httpx$_exceptions$$$class__24_StreamError_267;
            PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_92);
            CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
            tmp_kwargs_value_48 = tmp_class_creation_24__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 267;
            tmp_assign_source_193 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_48, tmp_kwargs_value_48);
            Py_DECREF(tmp_args_value_48);
            if (tmp_assign_source_193 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto try_except_handler_72;
            }
            assert(Nuitka_Cell_GET(outline_23_var___class__) == NULL);
            PyCell_SET(outline_23_var___class__, tmp_assign_source_193);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_23_var___class__));
        tmp_assign_source_192 = Nuitka_Cell_GET(outline_23_var___class__);
        Py_INCREF(tmp_assign_source_192);
        goto try_return_handler_72;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_72:;
        Py_DECREF(locals_httpx$_exceptions$$$class__24_StreamError_267);
        locals_httpx$_exceptions$$$class__24_StreamError_267 = NULL;
        goto try_return_handler_71;
        // Exception handler code:
        try_except_handler_72:;
        exception_keeper_type_70 = exception_type;
        exception_keeper_value_70 = exception_value;
        exception_keeper_tb_70 = exception_tb;
        exception_keeper_lineno_70 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__24_StreamError_267);
        locals_httpx$_exceptions$$$class__24_StreamError_267 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_70;
        exception_value = exception_keeper_value_70;
        exception_tb = exception_keeper_tb_70;
        exception_lineno = exception_keeper_lineno_70;

        goto try_except_handler_71;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_71:;
        CHECK_OBJECT(outline_23_var___class__);
        Py_DECREF(outline_23_var___class__);
        outline_23_var___class__ = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_71:;
        exception_keeper_type_71 = exception_type;
        exception_keeper_value_71 = exception_value;
        exception_keeper_tb_71 = exception_tb;
        exception_keeper_lineno_71 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_71;
        exception_value = exception_keeper_value_71;
        exception_tb = exception_keeper_tb_71;
        exception_lineno = exception_keeper_lineno_71;

        goto outline_exception_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_24:;
        exception_lineno = 267;
        goto try_except_handler_70;
        outline_result_24:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_192);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_72 = exception_type;
    exception_keeper_value_72 = exception_value;
    exception_keeper_tb_72 = exception_tb;
    exception_keeper_lineno_72 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    Py_XDECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_72;
    exception_value = exception_keeper_value_72;
    exception_tb = exception_keeper_tb_72;
    exception_lineno = exception_keeper_lineno_72;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_24__bases);
    Py_DECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__metaclass);
    Py_DECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_tuple_element_93;
        tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_tuple_element_93 == NULL)) {
            tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_tuple_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        tmp_assign_source_194 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_194, 0, tmp_tuple_element_93);
        assert(tmp_class_creation_25__bases_orig == NULL);
        tmp_class_creation_25__bases_orig = tmp_assign_source_194;
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_dircall_arg1_25;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dircall_arg1_25 = tmp_class_creation_25__bases_orig;
        Py_INCREF(tmp_dircall_arg1_25);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_25};
            tmp_assign_source_195 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        assert(tmp_class_creation_25__bases == NULL);
        tmp_class_creation_25__bases = tmp_assign_source_195;
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__class_decl_dict == NULL);
        tmp_class_creation_25__class_decl_dict = tmp_assign_source_196;
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_metaclass_value_25;
        nuitka_bool tmp_condition_result_98;
        int tmp_truth_name_25;
        PyObject *tmp_type_arg_49;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_bases_value_25;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_class_creation_25__bases);
        if (tmp_truth_name_25 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        tmp_condition_result_98 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_98 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_expression_value_147 = tmp_class_creation_25__bases;
        tmp_subscript_value_26 = mod_consts[22];
        tmp_type_arg_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_147, tmp_subscript_value_26, 0);
        if (tmp_type_arg_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_49);
        Py_DECREF(tmp_type_arg_49);
        if (tmp_metaclass_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_25);
        condexpr_end_26:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_bases_value_25 = tmp_class_creation_25__bases;
        tmp_assign_source_197 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
        Py_DECREF(tmp_metaclass_value_25);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        assert(tmp_class_creation_25__metaclass == NULL);
        tmp_class_creation_25__metaclass = tmp_assign_source_197;
    }
    {
        bool tmp_condition_result_99;
        PyObject *tmp_expression_value_148;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_148 = tmp_class_creation_25__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_148, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        tmp_condition_result_99 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_99 != false) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_args_value_49;
        PyObject *tmp_tuple_element_94;
        PyObject *tmp_kwargs_value_49;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_149 = tmp_class_creation_25__metaclass;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[25]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        tmp_tuple_element_94 = mod_consts[100];
        tmp_args_value_49 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_94);
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_tuple_element_94 = tmp_class_creation_25__bases;
        PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_94);
        CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
        tmp_kwargs_value_49 = tmp_class_creation_25__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 279;
        tmp_assign_source_198 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_49, tmp_kwargs_value_49);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_value_49);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_198;
    }
    {
        bool tmp_condition_result_100;
        PyObject *tmp_operand_value_25;
        PyObject *tmp_expression_value_150;
        CHECK_OBJECT(tmp_class_creation_25__prepared);
        tmp_expression_value_150 = tmp_class_creation_25__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_150, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        tmp_operand_value_25 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_100 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_100 != false) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        PyObject *tmp_raise_type_25;
        PyObject *tmp_raise_value_25;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        PyObject *tmp_tuple_element_95;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_name_value_26;
        PyObject *tmp_default_value_25;
        tmp_raise_type_25 = PyExc_TypeError;
        tmp_mod_expr_left_25 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_151 = tmp_class_creation_25__metaclass;
        tmp_name_value_26 = mod_consts[29];
        tmp_default_value_25 = mod_consts[30];
        tmp_tuple_element_95 = BUILTIN_GETATTR(tstate, tmp_expression_value_151, tmp_name_value_26, tmp_default_value_25);
        if (tmp_tuple_element_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_152;
            PyObject *tmp_type_arg_50;
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_type_arg_50 = tmp_class_creation_25__prepared;
            tmp_expression_value_152 = BUILTIN_TYPE1(tmp_type_arg_50);
            assert(!(tmp_expression_value_152 == NULL));
            tmp_tuple_element_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[29]);
            Py_DECREF(tmp_expression_value_152);
            if (tmp_tuple_element_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_95);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_25);
        goto try_except_handler_73;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        Py_DECREF(tmp_mod_expr_right_25);
        if (tmp_raise_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_73;
        }
        exception_type = tmp_raise_type_25;
        Py_INCREF(tmp_raise_type_25);
        exception_value = tmp_raise_value_25;
        exception_lineno = 279;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_73;
    }
    branch_no_74:;
    goto branch_end_73;
    branch_no_73:;
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_199;
    }
    branch_end_73:;
    {
        PyObject *tmp_assign_source_200;
        outline_24_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_25;
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_set_locals_25 = tmp_class_creation_25__prepared;
            locals_httpx$_exceptions$$$class__25_StreamConsumed_279 = tmp_set_locals_25;
            Py_INCREF(tmp_set_locals_25);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_279, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_75;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_279, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_75;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_279, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_75;
        }
        frame_0532c4c85e08234ad1552272e66270fe_8 = MAKE_CLASS_FRAME(tstate, codeobj_0532c4c85e08234ad1552272e66270fe, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0532c4c85e08234ad1552272e66270fe_8);
        assert(Py_REFCNT(frame_0532c4c85e08234ad1552272e66270fe_8) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_10;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_annotations_10 = DICT_COPY(mod_consts[102]);

            tmp_closure_7[0] = outline_24_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__9___init__(tmp_annotations_10, tmp_closure_7);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_279, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0532c4c85e08234ad1552272e66270fe_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0532c4c85e08234ad1552272e66270fe_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0532c4c85e08234ad1552272e66270fe_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0532c4c85e08234ad1552272e66270fe_8,
            type_description_2,
            outline_24_var___class__
        );



        assertFrameObject(frame_0532c4c85e08234ad1552272e66270fe_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_75;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_101;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_cmp_expr_left_25 = tmp_class_creation_25__bases;
            CHECK_OBJECT(tmp_class_creation_25__bases_orig);
            tmp_cmp_expr_right_25 = tmp_class_creation_25__bases_orig;
            tmp_condition_result_101 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
            if (tmp_condition_result_101 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto try_except_handler_75;
            }
            if (tmp_condition_result_101 == NUITKA_BOOL_TRUE) {
                goto branch_yes_75;
            } else {
                goto branch_no_75;
            }
        }
        branch_yes_75:;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dictset_value = tmp_class_creation_25__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__25_StreamConsumed_279, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto try_except_handler_75;
        }
        branch_no_75:;
        {
            PyObject *tmp_assign_source_201;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_50;
            PyObject *tmp_tuple_element_96;
            PyObject *tmp_kwargs_value_50;
            CHECK_OBJECT(tmp_class_creation_25__metaclass);
            tmp_called_value_52 = tmp_class_creation_25__metaclass;
            tmp_tuple_element_96 = mod_consts[100];
            tmp_args_value_50 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_96);
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_tuple_element_96 = tmp_class_creation_25__bases;
            PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_96);
            tmp_tuple_element_96 = locals_httpx$_exceptions$$$class__25_StreamConsumed_279;
            PyTuple_SET_ITEM0(tmp_args_value_50, 2, tmp_tuple_element_96);
            CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
            tmp_kwargs_value_50 = tmp_class_creation_25__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 279;
            tmp_assign_source_201 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_50, tmp_kwargs_value_50);
            Py_DECREF(tmp_args_value_50);
            if (tmp_assign_source_201 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto try_except_handler_75;
            }
            assert(Nuitka_Cell_GET(outline_24_var___class__) == NULL);
            PyCell_SET(outline_24_var___class__, tmp_assign_source_201);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_24_var___class__));
        tmp_assign_source_200 = Nuitka_Cell_GET(outline_24_var___class__);
        Py_INCREF(tmp_assign_source_200);
        goto try_return_handler_75;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_75:;
        Py_DECREF(locals_httpx$_exceptions$$$class__25_StreamConsumed_279);
        locals_httpx$_exceptions$$$class__25_StreamConsumed_279 = NULL;
        goto try_return_handler_74;
        // Exception handler code:
        try_except_handler_75:;
        exception_keeper_type_73 = exception_type;
        exception_keeper_value_73 = exception_value;
        exception_keeper_tb_73 = exception_tb;
        exception_keeper_lineno_73 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__25_StreamConsumed_279);
        locals_httpx$_exceptions$$$class__25_StreamConsumed_279 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_73;
        exception_value = exception_keeper_value_73;
        exception_tb = exception_keeper_tb_73;
        exception_lineno = exception_keeper_lineno_73;

        goto try_except_handler_74;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_74:;
        CHECK_OBJECT(outline_24_var___class__);
        Py_DECREF(outline_24_var___class__);
        outline_24_var___class__ = NULL;
        goto outline_result_25;
        // Exception handler code:
        try_except_handler_74:;
        exception_keeper_type_74 = exception_type;
        exception_keeper_value_74 = exception_value;
        exception_keeper_tb_74 = exception_tb;
        exception_keeper_lineno_74 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_74;
        exception_value = exception_keeper_value_74;
        exception_tb = exception_keeper_tb_74;
        exception_lineno = exception_keeper_lineno_74;

        goto outline_exception_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_25:;
        exception_lineno = 279;
        goto try_except_handler_73;
        outline_result_25:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_200);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_75 = exception_type;
    exception_keeper_value_75 = exception_value;
    exception_keeper_tb_75 = exception_tb;
    exception_keeper_lineno_75 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    Py_XDECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_75;
    exception_value = exception_keeper_value_75;
    exception_tb = exception_keeper_tb_75;
    exception_lineno = exception_keeper_lineno_75;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_class_creation_25__bases_orig);
    Py_DECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_25__bases);
    Py_DECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
    Py_DECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_25__metaclass);
    Py_DECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_25__prepared);
    Py_DECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_tuple_element_97;
        tmp_tuple_element_97 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_tuple_element_97 == NULL)) {
            tmp_tuple_element_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_tuple_element_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        tmp_assign_source_202 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_202, 0, tmp_tuple_element_97);
        assert(tmp_class_creation_26__bases_orig == NULL);
        tmp_class_creation_26__bases_orig = tmp_assign_source_202;
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_dircall_arg1_26;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dircall_arg1_26 = tmp_class_creation_26__bases_orig;
        Py_INCREF(tmp_dircall_arg1_26);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_26};
            tmp_assign_source_203 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        assert(tmp_class_creation_26__bases == NULL);
        tmp_class_creation_26__bases = tmp_assign_source_203;
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__class_decl_dict == NULL);
        tmp_class_creation_26__class_decl_dict = tmp_assign_source_204;
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_metaclass_value_26;
        nuitka_bool tmp_condition_result_102;
        int tmp_truth_name_26;
        PyObject *tmp_type_arg_51;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_bases_value_26;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_class_creation_26__bases);
        if (tmp_truth_name_26 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        tmp_condition_result_102 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_102 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_expression_value_153 = tmp_class_creation_26__bases;
        tmp_subscript_value_27 = mod_consts[22];
        tmp_type_arg_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_153, tmp_subscript_value_27, 0);
        if (tmp_type_arg_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        tmp_metaclass_value_26 = BUILTIN_TYPE1(tmp_type_arg_51);
        Py_DECREF(tmp_type_arg_51);
        if (tmp_metaclass_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_26);
        condexpr_end_27:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_bases_value_26 = tmp_class_creation_26__bases;
        tmp_assign_source_205 = SELECT_METACLASS(tstate, tmp_metaclass_value_26, tmp_bases_value_26);
        Py_DECREF(tmp_metaclass_value_26);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        assert(tmp_class_creation_26__metaclass == NULL);
        tmp_class_creation_26__metaclass = tmp_assign_source_205;
    }
    {
        bool tmp_condition_result_103;
        PyObject *tmp_expression_value_154;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_154 = tmp_class_creation_26__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_154, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        tmp_condition_result_103 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_103 != false) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
    }
    branch_yes_76:;
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_args_value_51;
        PyObject *tmp_tuple_element_98;
        PyObject *tmp_kwargs_value_51;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_155 = tmp_class_creation_26__metaclass;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[25]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        tmp_tuple_element_98 = mod_consts[104];
        tmp_args_value_51 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_98);
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_tuple_element_98 = tmp_class_creation_26__bases;
        PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_98);
        CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
        tmp_kwargs_value_51 = tmp_class_creation_26__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 297;
        tmp_assign_source_206 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_51, tmp_kwargs_value_51);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_value_51);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_206;
    }
    {
        bool tmp_condition_result_104;
        PyObject *tmp_operand_value_26;
        PyObject *tmp_expression_value_156;
        CHECK_OBJECT(tmp_class_creation_26__prepared);
        tmp_expression_value_156 = tmp_class_creation_26__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_156, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        tmp_operand_value_26 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
        assert(!(tmp_res == -1));
        tmp_condition_result_104 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_104 != false) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    {
        PyObject *tmp_raise_type_26;
        PyObject *tmp_raise_value_26;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        PyObject *tmp_tuple_element_99;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_name_value_27;
        PyObject *tmp_default_value_26;
        tmp_raise_type_26 = PyExc_TypeError;
        tmp_mod_expr_left_26 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_157 = tmp_class_creation_26__metaclass;
        tmp_name_value_27 = mod_consts[29];
        tmp_default_value_26 = mod_consts[30];
        tmp_tuple_element_99 = BUILTIN_GETATTR(tstate, tmp_expression_value_157, tmp_name_value_27, tmp_default_value_26);
        if (tmp_tuple_element_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_158;
            PyObject *tmp_type_arg_52;
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 0, tmp_tuple_element_99);
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_type_arg_52 = tmp_class_creation_26__prepared;
            tmp_expression_value_158 = BUILTIN_TYPE1(tmp_type_arg_52);
            assert(!(tmp_expression_value_158 == NULL));
            tmp_tuple_element_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[29]);
            Py_DECREF(tmp_expression_value_158);
            if (tmp_tuple_element_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 1, tmp_tuple_element_99);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_mod_expr_right_26);
        goto try_except_handler_76;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_raise_value_26 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        Py_DECREF(tmp_mod_expr_right_26);
        if (tmp_raise_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_76;
        }
        exception_type = tmp_raise_type_26;
        Py_INCREF(tmp_raise_type_26);
        exception_value = tmp_raise_value_26;
        exception_lineno = 297;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_76;
    }
    branch_no_77:;
    goto branch_end_76;
    branch_no_76:;
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_207;
    }
    branch_end_76:;
    {
        PyObject *tmp_assign_source_208;
        outline_25_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_26;
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_set_locals_26 = tmp_class_creation_26__prepared;
            locals_httpx$_exceptions$$$class__26_StreamClosed_297 = tmp_set_locals_26;
            Py_INCREF(tmp_set_locals_26);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_297, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_78;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_297, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_78;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_297, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_78;
        }
        frame_9cc5c6ab9ab235c89456523df931ea4e_9 = MAKE_CLASS_FRAME(tstate, codeobj_9cc5c6ab9ab235c89456523df931ea4e, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_9cc5c6ab9ab235c89456523df931ea4e_9);
        assert(Py_REFCNT(frame_9cc5c6ab9ab235c89456523df931ea4e_9) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            struct Nuitka_CellObject *tmp_closure_8[1];
            tmp_annotations_11 = DICT_COPY(mod_consts[102]);

            tmp_closure_8[0] = outline_25_var___class__;
            Py_INCREF(tmp_closure_8[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__10___init__(tmp_annotations_11, tmp_closure_8);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_297, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9cc5c6ab9ab235c89456523df931ea4e_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9cc5c6ab9ab235c89456523df931ea4e_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9cc5c6ab9ab235c89456523df931ea4e_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9cc5c6ab9ab235c89456523df931ea4e_9,
            type_description_2,
            outline_25_var___class__
        );



        assertFrameObject(frame_9cc5c6ab9ab235c89456523df931ea4e_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_78;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_105;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_cmp_expr_left_26 = tmp_class_creation_26__bases;
            CHECK_OBJECT(tmp_class_creation_26__bases_orig);
            tmp_cmp_expr_right_26 = tmp_class_creation_26__bases_orig;
            tmp_condition_result_105 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            if (tmp_condition_result_105 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_78;
            }
            if (tmp_condition_result_105 == NUITKA_BOOL_TRUE) {
                goto branch_yes_78;
            } else {
                goto branch_no_78;
            }
        }
        branch_yes_78:;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dictset_value = tmp_class_creation_26__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__26_StreamClosed_297, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_78;
        }
        branch_no_78:;
        {
            PyObject *tmp_assign_source_209;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_value_52;
            PyObject *tmp_tuple_element_100;
            PyObject *tmp_kwargs_value_52;
            CHECK_OBJECT(tmp_class_creation_26__metaclass);
            tmp_called_value_54 = tmp_class_creation_26__metaclass;
            tmp_tuple_element_100 = mod_consts[104];
            tmp_args_value_52 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_100);
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_tuple_element_100 = tmp_class_creation_26__bases;
            PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_100);
            tmp_tuple_element_100 = locals_httpx$_exceptions$$$class__26_StreamClosed_297;
            PyTuple_SET_ITEM0(tmp_args_value_52, 2, tmp_tuple_element_100);
            CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
            tmp_kwargs_value_52 = tmp_class_creation_26__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 297;
            tmp_assign_source_209 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_52, tmp_kwargs_value_52);
            Py_DECREF(tmp_args_value_52);
            if (tmp_assign_source_209 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_78;
            }
            assert(Nuitka_Cell_GET(outline_25_var___class__) == NULL);
            PyCell_SET(outline_25_var___class__, tmp_assign_source_209);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_25_var___class__));
        tmp_assign_source_208 = Nuitka_Cell_GET(outline_25_var___class__);
        Py_INCREF(tmp_assign_source_208);
        goto try_return_handler_78;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_78:;
        Py_DECREF(locals_httpx$_exceptions$$$class__26_StreamClosed_297);
        locals_httpx$_exceptions$$$class__26_StreamClosed_297 = NULL;
        goto try_return_handler_77;
        // Exception handler code:
        try_except_handler_78:;
        exception_keeper_type_76 = exception_type;
        exception_keeper_value_76 = exception_value;
        exception_keeper_tb_76 = exception_tb;
        exception_keeper_lineno_76 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__26_StreamClosed_297);
        locals_httpx$_exceptions$$$class__26_StreamClosed_297 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_76;
        exception_value = exception_keeper_value_76;
        exception_tb = exception_keeper_tb_76;
        exception_lineno = exception_keeper_lineno_76;

        goto try_except_handler_77;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_77:;
        CHECK_OBJECT(outline_25_var___class__);
        Py_DECREF(outline_25_var___class__);
        outline_25_var___class__ = NULL;
        goto outline_result_26;
        // Exception handler code:
        try_except_handler_77:;
        exception_keeper_type_77 = exception_type;
        exception_keeper_value_77 = exception_value;
        exception_keeper_tb_77 = exception_tb;
        exception_keeper_lineno_77 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_77;
        exception_value = exception_keeper_value_77;
        exception_tb = exception_keeper_tb_77;
        exception_lineno = exception_keeper_lineno_77;

        goto outline_exception_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_26:;
        exception_lineno = 297;
        goto try_except_handler_76;
        outline_result_26:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_208);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_78 = exception_type;
    exception_keeper_value_78 = exception_value;
    exception_keeper_tb_78 = exception_tb;
    exception_keeper_lineno_78 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    Py_XDECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_78;
    exception_value = exception_keeper_value_78;
    exception_tb = exception_keeper_tb_78;
    exception_lineno = exception_keeper_lineno_78;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_class_creation_26__bases_orig);
    Py_DECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_26__bases);
    Py_DECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
    Py_DECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_26__metaclass);
    Py_DECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_26__prepared);
    Py_DECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_tuple_element_101;
        tmp_tuple_element_101 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_tuple_element_101 == NULL)) {
            tmp_tuple_element_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_tuple_element_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        tmp_assign_source_210 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_210, 0, tmp_tuple_element_101);
        assert(tmp_class_creation_27__bases_orig == NULL);
        tmp_class_creation_27__bases_orig = tmp_assign_source_210;
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_dircall_arg1_27;
        CHECK_OBJECT(tmp_class_creation_27__bases_orig);
        tmp_dircall_arg1_27 = tmp_class_creation_27__bases_orig;
        Py_INCREF(tmp_dircall_arg1_27);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_27};
            tmp_assign_source_211 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        assert(tmp_class_creation_27__bases == NULL);
        tmp_class_creation_27__bases = tmp_assign_source_211;
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__class_decl_dict == NULL);
        tmp_class_creation_27__class_decl_dict = tmp_assign_source_212;
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_metaclass_value_27;
        nuitka_bool tmp_condition_result_106;
        int tmp_truth_name_27;
        PyObject *tmp_type_arg_53;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_bases_value_27;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_truth_name_27 = CHECK_IF_TRUE(tmp_class_creation_27__bases);
        if (tmp_truth_name_27 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        tmp_condition_result_106 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_106 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_28;
        } else {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_expression_value_159 = tmp_class_creation_27__bases;
        tmp_subscript_value_28 = mod_consts[22];
        tmp_type_arg_53 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_159, tmp_subscript_value_28, 0);
        if (tmp_type_arg_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        tmp_metaclass_value_27 = BUILTIN_TYPE1(tmp_type_arg_53);
        Py_DECREF(tmp_type_arg_53);
        if (tmp_metaclass_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        tmp_metaclass_value_27 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_27);
        condexpr_end_28:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_bases_value_27 = tmp_class_creation_27__bases;
        tmp_assign_source_213 = SELECT_METACLASS(tstate, tmp_metaclass_value_27, tmp_bases_value_27);
        Py_DECREF(tmp_metaclass_value_27);
        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        assert(tmp_class_creation_27__metaclass == NULL);
        tmp_class_creation_27__metaclass = tmp_assign_source_213;
    }
    {
        bool tmp_condition_result_107;
        PyObject *tmp_expression_value_160;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_160 = tmp_class_creation_27__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_160, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        tmp_condition_result_107 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_107 != false) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_args_value_53;
        PyObject *tmp_tuple_element_102;
        PyObject *tmp_kwargs_value_53;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_161 = tmp_class_creation_27__metaclass;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[25]);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        tmp_tuple_element_102 = mod_consts[107];
        tmp_args_value_53 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_53, 0, tmp_tuple_element_102);
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_tuple_element_102 = tmp_class_creation_27__bases;
        PyTuple_SET_ITEM0(tmp_args_value_53, 1, tmp_tuple_element_102);
        CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
        tmp_kwargs_value_53 = tmp_class_creation_27__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 310;
        tmp_assign_source_214 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_53, tmp_kwargs_value_53);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_value_53);
        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_214;
    }
    {
        bool tmp_condition_result_108;
        PyObject *tmp_operand_value_27;
        PyObject *tmp_expression_value_162;
        CHECK_OBJECT(tmp_class_creation_27__prepared);
        tmp_expression_value_162 = tmp_class_creation_27__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_162, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        tmp_operand_value_27 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_108 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_108 != false) {
            goto branch_yes_80;
        } else {
            goto branch_no_80;
        }
    }
    branch_yes_80:;
    {
        PyObject *tmp_raise_type_27;
        PyObject *tmp_raise_value_27;
        PyObject *tmp_mod_expr_left_27;
        PyObject *tmp_mod_expr_right_27;
        PyObject *tmp_tuple_element_103;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_name_value_28;
        PyObject *tmp_default_value_27;
        tmp_raise_type_27 = PyExc_TypeError;
        tmp_mod_expr_left_27 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_163 = tmp_class_creation_27__metaclass;
        tmp_name_value_28 = mod_consts[29];
        tmp_default_value_27 = mod_consts[30];
        tmp_tuple_element_103 = BUILTIN_GETATTR(tstate, tmp_expression_value_163, tmp_name_value_28, tmp_default_value_27);
        if (tmp_tuple_element_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        tmp_mod_expr_right_27 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_164;
            PyObject *tmp_type_arg_54;
            PyTuple_SET_ITEM(tmp_mod_expr_right_27, 0, tmp_tuple_element_103);
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_type_arg_54 = tmp_class_creation_27__prepared;
            tmp_expression_value_164 = BUILTIN_TYPE1(tmp_type_arg_54);
            assert(!(tmp_expression_value_164 == NULL));
            tmp_tuple_element_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[29]);
            Py_DECREF(tmp_expression_value_164);
            if (tmp_tuple_element_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_27, 1, tmp_tuple_element_103);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_mod_expr_right_27);
        goto try_except_handler_79;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_raise_value_27 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_27, tmp_mod_expr_right_27);
        Py_DECREF(tmp_mod_expr_right_27);
        if (tmp_raise_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_79;
        }
        exception_type = tmp_raise_type_27;
        Py_INCREF(tmp_raise_type_27);
        exception_value = tmp_raise_value_27;
        exception_lineno = 310;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_79;
    }
    branch_no_80:;
    goto branch_end_79;
    branch_no_79:;
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_215;
    }
    branch_end_79:;
    {
        PyObject *tmp_assign_source_216;
        outline_26_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_27;
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_set_locals_27 = tmp_class_creation_27__prepared;
            locals_httpx$_exceptions$$$class__27_ResponseNotRead_310 = tmp_set_locals_27;
            Py_INCREF(tmp_set_locals_27);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_310, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_81;
        }
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_310, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_81;
        }
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_310, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_81;
        }
        frame_50cfe5d411864287b34ce6371e7a490f_10 = MAKE_CLASS_FRAME(tstate, codeobj_50cfe5d411864287b34ce6371e7a490f, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_50cfe5d411864287b34ce6371e7a490f_10);
        assert(Py_REFCNT(frame_50cfe5d411864287b34ce6371e7a490f_10) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_12;
            struct Nuitka_CellObject *tmp_closure_9[1];
            tmp_annotations_12 = DICT_COPY(mod_consts[102]);

            tmp_closure_9[0] = outline_26_var___class__;
            Py_INCREF(tmp_closure_9[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__11___init__(tmp_annotations_12, tmp_closure_9);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_310, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "c";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_50cfe5d411864287b34ce6371e7a490f_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_50cfe5d411864287b34ce6371e7a490f_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_50cfe5d411864287b34ce6371e7a490f_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_50cfe5d411864287b34ce6371e7a490f_10,
            type_description_2,
            outline_26_var___class__
        );



        assertFrameObject(frame_50cfe5d411864287b34ce6371e7a490f_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_81;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_109;
            PyObject *tmp_cmp_expr_left_27;
            PyObject *tmp_cmp_expr_right_27;
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_cmp_expr_left_27 = tmp_class_creation_27__bases;
            CHECK_OBJECT(tmp_class_creation_27__bases_orig);
            tmp_cmp_expr_right_27 = tmp_class_creation_27__bases_orig;
            tmp_condition_result_109 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
            if (tmp_condition_result_109 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto try_except_handler_81;
            }
            if (tmp_condition_result_109 == NUITKA_BOOL_TRUE) {
                goto branch_yes_81;
            } else {
                goto branch_no_81;
            }
        }
        branch_yes_81:;
        CHECK_OBJECT(tmp_class_creation_27__bases_orig);
        tmp_dictset_value = tmp_class_creation_27__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__27_ResponseNotRead_310, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto try_except_handler_81;
        }
        branch_no_81:;
        {
            PyObject *tmp_assign_source_217;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_value_54;
            PyObject *tmp_tuple_element_104;
            PyObject *tmp_kwargs_value_54;
            CHECK_OBJECT(tmp_class_creation_27__metaclass);
            tmp_called_value_56 = tmp_class_creation_27__metaclass;
            tmp_tuple_element_104 = mod_consts[107];
            tmp_args_value_54 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_54, 0, tmp_tuple_element_104);
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_tuple_element_104 = tmp_class_creation_27__bases;
            PyTuple_SET_ITEM0(tmp_args_value_54, 1, tmp_tuple_element_104);
            tmp_tuple_element_104 = locals_httpx$_exceptions$$$class__27_ResponseNotRead_310;
            PyTuple_SET_ITEM0(tmp_args_value_54, 2, tmp_tuple_element_104);
            CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
            tmp_kwargs_value_54 = tmp_class_creation_27__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 310;
            tmp_assign_source_217 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_54, tmp_kwargs_value_54);
            Py_DECREF(tmp_args_value_54);
            if (tmp_assign_source_217 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto try_except_handler_81;
            }
            assert(Nuitka_Cell_GET(outline_26_var___class__) == NULL);
            PyCell_SET(outline_26_var___class__, tmp_assign_source_217);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_26_var___class__));
        tmp_assign_source_216 = Nuitka_Cell_GET(outline_26_var___class__);
        Py_INCREF(tmp_assign_source_216);
        goto try_return_handler_81;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_81:;
        Py_DECREF(locals_httpx$_exceptions$$$class__27_ResponseNotRead_310);
        locals_httpx$_exceptions$$$class__27_ResponseNotRead_310 = NULL;
        goto try_return_handler_80;
        // Exception handler code:
        try_except_handler_81:;
        exception_keeper_type_79 = exception_type;
        exception_keeper_value_79 = exception_value;
        exception_keeper_tb_79 = exception_tb;
        exception_keeper_lineno_79 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__27_ResponseNotRead_310);
        locals_httpx$_exceptions$$$class__27_ResponseNotRead_310 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_79;
        exception_value = exception_keeper_value_79;
        exception_tb = exception_keeper_tb_79;
        exception_lineno = exception_keeper_lineno_79;

        goto try_except_handler_80;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_80:;
        CHECK_OBJECT(outline_26_var___class__);
        Py_DECREF(outline_26_var___class__);
        outline_26_var___class__ = NULL;
        goto outline_result_27;
        // Exception handler code:
        try_except_handler_80:;
        exception_keeper_type_80 = exception_type;
        exception_keeper_value_80 = exception_value;
        exception_keeper_tb_80 = exception_tb;
        exception_keeper_lineno_80 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_80;
        exception_value = exception_keeper_value_80;
        exception_tb = exception_keeper_tb_80;
        exception_lineno = exception_keeper_lineno_80;

        goto outline_exception_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_27:;
        exception_lineno = 310;
        goto try_except_handler_79;
        outline_result_27:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_216);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_79:;
    exception_keeper_type_81 = exception_type;
    exception_keeper_value_81 = exception_value;
    exception_keeper_tb_81 = exception_tb;
    exception_keeper_lineno_81 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_27__bases_orig);
    tmp_class_creation_27__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    Py_XDECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_81;
    exception_value = exception_keeper_value_81;
    exception_tb = exception_keeper_tb_81;
    exception_lineno = exception_keeper_lineno_81;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(tmp_class_creation_27__bases_orig);
    Py_DECREF(tmp_class_creation_27__bases_orig);
    tmp_class_creation_27__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_27__bases);
    Py_DECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
    Py_DECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_27__metaclass);
    Py_DECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_27__prepared);
    Py_DECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_tuple_element_105;
        tmp_tuple_element_105 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_tuple_element_105 == NULL)) {
            tmp_tuple_element_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_tuple_element_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        tmp_assign_source_218 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_218, 0, tmp_tuple_element_105);
        assert(tmp_class_creation_28__bases_orig == NULL);
        tmp_class_creation_28__bases_orig = tmp_assign_source_218;
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_dircall_arg1_28;
        CHECK_OBJECT(tmp_class_creation_28__bases_orig);
        tmp_dircall_arg1_28 = tmp_class_creation_28__bases_orig;
        Py_INCREF(tmp_dircall_arg1_28);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_28};
            tmp_assign_source_219 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        assert(tmp_class_creation_28__bases == NULL);
        tmp_class_creation_28__bases = tmp_assign_source_219;
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_28__class_decl_dict == NULL);
        tmp_class_creation_28__class_decl_dict = tmp_assign_source_220;
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_metaclass_value_28;
        nuitka_bool tmp_condition_result_110;
        int tmp_truth_name_28;
        PyObject *tmp_type_arg_55;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_bases_value_28;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_truth_name_28 = CHECK_IF_TRUE(tmp_class_creation_28__bases);
        if (tmp_truth_name_28 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        tmp_condition_result_110 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_110 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_29;
        } else {
            goto condexpr_false_29;
        }
        condexpr_true_29:;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_expression_value_165 = tmp_class_creation_28__bases;
        tmp_subscript_value_29 = mod_consts[22];
        tmp_type_arg_55 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_165, tmp_subscript_value_29, 0);
        if (tmp_type_arg_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        tmp_metaclass_value_28 = BUILTIN_TYPE1(tmp_type_arg_55);
        Py_DECREF(tmp_type_arg_55);
        if (tmp_metaclass_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        goto condexpr_end_29;
        condexpr_false_29:;
        tmp_metaclass_value_28 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_28);
        condexpr_end_29:;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_bases_value_28 = tmp_class_creation_28__bases;
        tmp_assign_source_221 = SELECT_METACLASS(tstate, tmp_metaclass_value_28, tmp_bases_value_28);
        Py_DECREF(tmp_metaclass_value_28);
        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        assert(tmp_class_creation_28__metaclass == NULL);
        tmp_class_creation_28__metaclass = tmp_assign_source_221;
    }
    {
        bool tmp_condition_result_111;
        PyObject *tmp_expression_value_166;
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_166 = tmp_class_creation_28__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_166, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        tmp_condition_result_111 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_111 != false) {
            goto branch_yes_82;
        } else {
            goto branch_no_82;
        }
    }
    branch_yes_82:;
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_value_55;
        PyObject *tmp_tuple_element_106;
        PyObject *tmp_kwargs_value_55;
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_167 = tmp_class_creation_28__metaclass;
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[25]);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        tmp_tuple_element_106 = mod_consts[110];
        tmp_args_value_55 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_55, 0, tmp_tuple_element_106);
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_tuple_element_106 = tmp_class_creation_28__bases;
        PyTuple_SET_ITEM0(tmp_args_value_55, 1, tmp_tuple_element_106);
        CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
        tmp_kwargs_value_55 = tmp_class_creation_28__class_decl_dict;
        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 320;
        tmp_assign_source_222 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_55, tmp_kwargs_value_55);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_value_55);
        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        assert(tmp_class_creation_28__prepared == NULL);
        tmp_class_creation_28__prepared = tmp_assign_source_222;
    }
    {
        bool tmp_condition_result_112;
        PyObject *tmp_operand_value_28;
        PyObject *tmp_expression_value_168;
        CHECK_OBJECT(tmp_class_creation_28__prepared);
        tmp_expression_value_168 = tmp_class_creation_28__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_168, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        tmp_operand_value_28 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_112 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_112 != false) {
            goto branch_yes_83;
        } else {
            goto branch_no_83;
        }
    }
    branch_yes_83:;
    {
        PyObject *tmp_raise_type_28;
        PyObject *tmp_raise_value_28;
        PyObject *tmp_mod_expr_left_28;
        PyObject *tmp_mod_expr_right_28;
        PyObject *tmp_tuple_element_107;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_name_value_29;
        PyObject *tmp_default_value_28;
        tmp_raise_type_28 = PyExc_TypeError;
        tmp_mod_expr_left_28 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_169 = tmp_class_creation_28__metaclass;
        tmp_name_value_29 = mod_consts[29];
        tmp_default_value_28 = mod_consts[30];
        tmp_tuple_element_107 = BUILTIN_GETATTR(tstate, tmp_expression_value_169, tmp_name_value_29, tmp_default_value_28);
        if (tmp_tuple_element_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        tmp_mod_expr_right_28 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_170;
            PyObject *tmp_type_arg_56;
            PyTuple_SET_ITEM(tmp_mod_expr_right_28, 0, tmp_tuple_element_107);
            CHECK_OBJECT(tmp_class_creation_28__prepared);
            tmp_type_arg_56 = tmp_class_creation_28__prepared;
            tmp_expression_value_170 = BUILTIN_TYPE1(tmp_type_arg_56);
            assert(!(tmp_expression_value_170 == NULL));
            tmp_tuple_element_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[29]);
            Py_DECREF(tmp_expression_value_170);
            if (tmp_tuple_element_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_28, 1, tmp_tuple_element_107);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_mod_expr_right_28);
        goto try_except_handler_82;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_raise_value_28 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_28, tmp_mod_expr_right_28);
        Py_DECREF(tmp_mod_expr_right_28);
        if (tmp_raise_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_82;
        }
        exception_type = tmp_raise_type_28;
        Py_INCREF(tmp_raise_type_28);
        exception_value = tmp_raise_value_28;
        exception_lineno = 320;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_82;
    }
    branch_no_83:;
    goto branch_end_82;
    branch_no_82:;
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_28__prepared == NULL);
        tmp_class_creation_28__prepared = tmp_assign_source_223;
    }
    branch_end_82:;
    {
        PyObject *tmp_assign_source_224;
        outline_27_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_28;
            CHECK_OBJECT(tmp_class_creation_28__prepared);
            tmp_set_locals_28 = tmp_class_creation_28__prepared;
            locals_httpx$_exceptions$$$class__28_RequestNotRead_320 = tmp_set_locals_28;
            Py_INCREF(tmp_set_locals_28);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_320, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_84;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_320, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_84;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_320, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_84;
        }
        frame_7a6ba2d6ad663d701a599a8ce71f384f_11 = MAKE_CLASS_FRAME(tstate, codeobj_7a6ba2d6ad663d701a599a8ce71f384f, module_httpx$_exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7a6ba2d6ad663d701a599a8ce71f384f_11);
        assert(Py_REFCNT(frame_7a6ba2d6ad663d701a599a8ce71f384f_11) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_13;
            struct Nuitka_CellObject *tmp_closure_10[1];
            tmp_annotations_13 = DICT_COPY(mod_consts[102]);

            tmp_closure_10[0] = outline_27_var___class__;
            Py_INCREF(tmp_closure_10[0]);

            tmp_dictset_value = MAKE_FUNCTION_httpx$_exceptions$$$function__12___init__(tmp_annotations_13, tmp_closure_10);

            tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_320, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7a6ba2d6ad663d701a599a8ce71f384f_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7a6ba2d6ad663d701a599a8ce71f384f_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7a6ba2d6ad663d701a599a8ce71f384f_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7a6ba2d6ad663d701a599a8ce71f384f_11,
            type_description_2,
            outline_27_var___class__
        );



        assertFrameObject(frame_7a6ba2d6ad663d701a599a8ce71f384f_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_84;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_113;
            PyObject *tmp_cmp_expr_left_28;
            PyObject *tmp_cmp_expr_right_28;
            CHECK_OBJECT(tmp_class_creation_28__bases);
            tmp_cmp_expr_left_28 = tmp_class_creation_28__bases;
            CHECK_OBJECT(tmp_class_creation_28__bases_orig);
            tmp_cmp_expr_right_28 = tmp_class_creation_28__bases_orig;
            tmp_condition_result_113 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
            if (tmp_condition_result_113 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto try_except_handler_84;
            }
            if (tmp_condition_result_113 == NUITKA_BOOL_TRUE) {
                goto branch_yes_84;
            } else {
                goto branch_no_84;
            }
        }
        branch_yes_84:;
        CHECK_OBJECT(tmp_class_creation_28__bases_orig);
        tmp_dictset_value = tmp_class_creation_28__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_exceptions$$$class__28_RequestNotRead_320, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto try_except_handler_84;
        }
        branch_no_84:;
        {
            PyObject *tmp_assign_source_225;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_value_56;
            PyObject *tmp_tuple_element_108;
            PyObject *tmp_kwargs_value_56;
            CHECK_OBJECT(tmp_class_creation_28__metaclass);
            tmp_called_value_58 = tmp_class_creation_28__metaclass;
            tmp_tuple_element_108 = mod_consts[110];
            tmp_args_value_56 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_56, 0, tmp_tuple_element_108);
            CHECK_OBJECT(tmp_class_creation_28__bases);
            tmp_tuple_element_108 = tmp_class_creation_28__bases;
            PyTuple_SET_ITEM0(tmp_args_value_56, 1, tmp_tuple_element_108);
            tmp_tuple_element_108 = locals_httpx$_exceptions$$$class__28_RequestNotRead_320;
            PyTuple_SET_ITEM0(tmp_args_value_56, 2, tmp_tuple_element_108);
            CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
            tmp_kwargs_value_56 = tmp_class_creation_28__class_decl_dict;
            frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 320;
            tmp_assign_source_225 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_56, tmp_kwargs_value_56);
            Py_DECREF(tmp_args_value_56);
            if (tmp_assign_source_225 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto try_except_handler_84;
            }
            assert(Nuitka_Cell_GET(outline_27_var___class__) == NULL);
            PyCell_SET(outline_27_var___class__, tmp_assign_source_225);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_27_var___class__));
        tmp_assign_source_224 = Nuitka_Cell_GET(outline_27_var___class__);
        Py_INCREF(tmp_assign_source_224);
        goto try_return_handler_84;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_84:;
        Py_DECREF(locals_httpx$_exceptions$$$class__28_RequestNotRead_320);
        locals_httpx$_exceptions$$$class__28_RequestNotRead_320 = NULL;
        goto try_return_handler_83;
        // Exception handler code:
        try_except_handler_84:;
        exception_keeper_type_82 = exception_type;
        exception_keeper_value_82 = exception_value;
        exception_keeper_tb_82 = exception_tb;
        exception_keeper_lineno_82 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_exceptions$$$class__28_RequestNotRead_320);
        locals_httpx$_exceptions$$$class__28_RequestNotRead_320 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_82;
        exception_value = exception_keeper_value_82;
        exception_tb = exception_keeper_tb_82;
        exception_lineno = exception_keeper_lineno_82;

        goto try_except_handler_83;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_83:;
        CHECK_OBJECT(outline_27_var___class__);
        Py_DECREF(outline_27_var___class__);
        outline_27_var___class__ = NULL;
        goto outline_result_28;
        // Exception handler code:
        try_except_handler_83:;
        exception_keeper_type_83 = exception_type;
        exception_keeper_value_83 = exception_value;
        exception_keeper_tb_83 = exception_tb;
        exception_keeper_lineno_83 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_83;
        exception_value = exception_keeper_value_83;
        exception_tb = exception_keeper_tb_83;
        exception_lineno = exception_keeper_lineno_83;

        goto outline_exception_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_28:;
        exception_lineno = 320;
        goto try_except_handler_82;
        outline_result_28:;
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_224);
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_82:;
    exception_keeper_type_84 = exception_type;
    exception_keeper_value_84 = exception_value;
    exception_keeper_tb_84 = exception_tb;
    exception_keeper_lineno_84 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_28__bases_orig);
    tmp_class_creation_28__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_28__bases);
    tmp_class_creation_28__bases = NULL;
    Py_XDECREF(tmp_class_creation_28__class_decl_dict);
    tmp_class_creation_28__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_28__prepared);
    tmp_class_creation_28__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_84;
    exception_value = exception_keeper_value_84;
    exception_tb = exception_keeper_tb_84;
    exception_lineno = exception_keeper_lineno_84;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_class_creation_28__bases_orig);
    Py_DECREF(tmp_class_creation_28__bases_orig);
    tmp_class_creation_28__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_28__bases);
    Py_DECREF(tmp_class_creation_28__bases);
    tmp_class_creation_28__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
    Py_DECREF(tmp_class_creation_28__class_decl_dict);
    tmp_class_creation_28__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_28__metaclass);
    Py_DECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_28__prepared);
    Py_DECREF(tmp_class_creation_28__prepared);
    tmp_class_creation_28__prepared = NULL;
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_subscript_value_30;
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[113]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[114];
        tmp_dict_key_7 = mod_consts[4];
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        assert(!(tmp_expression_value_173 == NULL));
        tmp_expression_value_172 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[47]);
        if (tmp_expression_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = mod_consts[48];
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_172, tmp_subscript_value_30);
        Py_DECREF(tmp_expression_value_172);
        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_174;
            PyObject *tmp_expression_value_175;
            PyObject *tmp_subscript_value_31;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[37];
            tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_175 == NULL)) {
                tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            assert(!(tmp_expression_value_175 == NULL));
            tmp_expression_value_174 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[115]);
            if (tmp_expression_value_174 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_31 = Py_None;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_174, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_174);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_4 = MAKE_FUNCTION_httpx$_exceptions$$$function__13_request_context(tmp_defaults_1, tmp_annotations_14);

        frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame.f_lineno = 330;
        tmp_assign_source_226 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_exceptions, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_226);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_11;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5152aa3dd4fecc186fb5f3d8568a9a27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5152aa3dd4fecc186fb5f3d8568a9a27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5152aa3dd4fecc186fb5f3d8568a9a27, exception_lineno);
    }



    assertFrameObject(frame_5152aa3dd4fecc186fb5f3d8568a9a27);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_11:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_exceptions", false);

    Py_INCREF(module_httpx$_exceptions);
    return module_httpx$_exceptions;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_exceptions", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
