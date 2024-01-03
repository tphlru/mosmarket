/* Generated code for Python module 'httpx$_types'
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

/* The "module_httpx$_types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_types;
PyDictObject *moduledict_httpx$_types;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[88];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[88];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("httpx._types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 88; i++) {
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
void checkModuleConstants_httpx$_types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 88; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_dd9b5ced6aa636eaee85ad7e205a487d;
static PyCodeObject *codeobj_644a903c3ccd7a8331fd99d5dab57071;
static PyCodeObject *codeobj_361e510b9b8d780b90b40ac88c318874;
static PyCodeObject *codeobj_30a70f074b786d8d214f68188682f97f;
static PyCodeObject *codeobj_e74d9b1bc21744a119a18a11d97f4096;
static PyCodeObject *codeobj_8d9e492b6ba88223473784226e1a19df;
static PyCodeObject *codeobj_033ad47bb899d571fb432d73ec3cb4fa;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[83]); CHECK_OBJECT(module_filename_obj);
    codeobj_dd9b5ced6aa636eaee85ad7e205a487d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[84], mod_consts[84], NULL, NULL, 0, 0, 0);
    codeobj_644a903c3ccd7a8331fd99d5dab57071 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[85], NULL, 0, 0, 0);
    codeobj_361e510b9b8d780b90b40ac88c318874 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[85], NULL, 0, 0, 0);
    codeobj_30a70f074b786d8d214f68188682f97f = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[86], NULL, 1, 0, 0);
    codeobj_e74d9b1bc21744a119a18a11d97f4096 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[86], NULL, 1, 0, 0);
    codeobj_8d9e492b6ba88223473784226e1a19df = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_COROUTINE | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[86], NULL, 1, 0, 0);
    codeobj_033ad47bb899d571fb432d73ec3cb4fa = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[86], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_types$$$function__1___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter__();


static PyObject *MAKE_COROUTINE_httpx$_types$$$function__4_aclose$$$coroutine__1_aclose(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__1___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__2_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__3___aiter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_types$$$function__4_aclose(PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_types$$$function__1___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = Nuitka_Cell_New0(par_self);

        tmp_return_value = MAKE_GENERATOR_httpx$_types$$$function__1___iter__$$$genobj__1___iter__(tmp_closure_1);

        goto function_return_exit;
    }

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
struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpx$_types$$$function__1___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_e74d9b1bc21744a119a18a11d97f4096, module_httpx$_types, sizeof(void *));
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        generator->m_frame->m_frame.f_lineno = 112;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 112;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }

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
            generator->m_closure[0]
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

static PyObject *MAKE_GENERATOR_httpx$_types$$$function__1___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_types$$$function__1___iter__$$$genobj__1___iter___context,
        module_httpx$_types,
        mod_consts[1],
#if PYTHON_VERSION >= 0x350
        mod_consts[2],
#endif
        codeobj_e74d9b1bc21744a119a18a11d97f4096,
        closure,
        1,
#if 1
        sizeof(struct httpx$_types$$$function__1___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_types$$$function__3___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_ASYNCGEN_httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter__();

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
struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals *asyncgen_heap = (struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    asyncgen_heap->type_description_1 = NULL;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_30a70f074b786d8d214f68188682f97f, module_httpx$_types, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    asyncgen->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

    assert(asyncgen->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[3];
        asyncgen->m_frame->m_frame.f_lineno = 126;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        asyncgen_heap->exception_type = tmp_raise_type_1;
        asyncgen_heap->exception_lineno = 126;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
        asyncgen_heap->type_description_1 = "N";
        goto frame_exception_exit_1;
    }

    // Release exception attached to the frame
    DROP_ASYNCGEN_EXCEPTION(asyncgen);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, asyncgen_heap->exception_type)) {
        if (asyncgen_heap->exception_tb == NULL) {
            asyncgen_heap->exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        } else if (asyncgen_heap->exception_tb->tb_frame != &asyncgen->m_frame->m_frame) {
            asyncgen_heap->exception_tb = ADD_TRACEBACK(asyncgen_heap->exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            asyncgen->m_frame,
            asyncgen_heap->type_description_1,
            NULL
        );


        // Release cached frame if used for exception.
        if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(asyncgen->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
    Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    assert(asyncgen_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, asyncgen_heap->exception_type, asyncgen_heap->exception_value, asyncgen_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_ASYNCGEN_httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter__() {
    return Nuitka_Asyncgen_New(
        httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___context,
        module_httpx$_types,
        mod_consts[4],
        mod_consts[5],
        codeobj_30a70f074b786d8d214f68188682f97f,
        NULL,
        0,
#if 1
        sizeof(struct httpx$_types$$$function__3___aiter__$$$asyncgen__1___aiter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_types$$$function__4_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpx$_types$$$function__4_aclose$$$coroutine__1_aclose(tstate);

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
struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_httpx$_types$$$function__4_aclose$$$coroutine__1_aclose(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_context,
        module_httpx$_types,
        mod_consts[6],
        mod_consts[7],
        codeobj_8d9e492b6ba88223473784226e1a19df,
        NULL,
        0,
#if 1
        sizeof(struct httpx$_types$$$function__4_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__1___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_types$$$function__1___iter__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[2],
#endif
        codeobj_e74d9b1bc21744a119a18a11d97f4096,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__2_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_033ad47bb899d571fb432d73ec3cb4fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
        mod_consts[78],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__3___aiter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_types$$$function__3___aiter__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[5],
#endif
        codeobj_30a70f074b786d8d214f68188682f97f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_types$$$function__4_aclose(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_types$$$function__4_aclose,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_8d9e492b6ba88223473784226e1a19df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_types,
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

static function_impl_code const function_table_httpx$_types[] = {
    impl_httpx$_types$$$function__1___iter__,
    impl_httpx$_types$$$function__3___aiter__,
    impl_httpx$_types$$$function__4_aclose,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_httpx$_types);

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
        module_httpx$_types,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_httpx$_types,
        sizeof(function_table_httpx$_types) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_httpx$_types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_types");

    // Store the module for future use.
    module_httpx$_types = module;

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
        PRINT_STRING("httpx$_types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpx$_types\n");

    moduledict_httpx$_types = MODULE_DICT(module_httpx$_types);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[87]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_types);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_dd9b5ced6aa636eaee85ad7e205a487d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_httpx$_types$$$class__1_SyncByteStream_110 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_361e510b9b8d780b90b40ac88c318874_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_httpx$_types$$$class__2_AsyncByteStream_124 = NULL;
    struct Nuitka_FrameObject *frame_644a903c3ccd7a8331fd99d5dab57071_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    frame_dd9b5ced6aa636eaee85ad7e205a487d = MAKE_MODULE_FRAME(codeobj_dd9b5ced6aa636eaee85ad7e205a487d, module_httpx$_types);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dd9b5ced6aa636eaee85ad7e205a487d);
    assert(Py_REFCNT(frame_dd9b5ced6aa636eaee85ad7e205a487d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_types;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[16];
        frame_dd9b5ced6aa636eaee85ad7e205a487d->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[17];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_types;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[18];
        tmp_level_value_2 = mod_consts[16];
        frame_dd9b5ced6aa636eaee85ad7e205a487d->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[19],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[20],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[20]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_False;
        UPDATE_STRING_DICT0(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[22],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[22]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[23],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[23]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[24],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[24]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[25],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[25]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[26],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[26]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[27],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[27]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[28],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[28]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[29],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[29]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[30],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[30]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[31],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[31]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[32],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[32]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[33],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[33]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[34],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[34]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_16 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_httpx$_types,
                mod_consts[35],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[35]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_22);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_subscript_value_2 = mod_consts[36];
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[38];
        tmp_list_element_1 = mod_consts[39];
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_tuple_element_1;
            PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[40];
            PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
            tmp_tuple_element_1 = mod_consts[41];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_3;
                PyObject *tmp_subscript_value_3;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;

                    goto tuple_build_exception_1;
                }
                tmp_subscript_value_3 = (PyObject *)&PyLong_Type;
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;

                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[42];
            PyList_SET_ITEM0(tmp_args_element_value_2, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_dd9b5ced6aa636eaee85ad7e205a487d->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[43];
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[45];
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_7;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_2);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_tuple_element_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_3);
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
                }

                if (tmp_expression_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;

                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[37]);

                if (unlikely(tmp_tuple_element_4 == NULL)) {
                    tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;

                    goto tuple_build_exception_3;
                }
                tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_8;
                    PyObject *tmp_subscript_value_8;
                    PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_4);
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;

                        goto tuple_build_exception_4;
                    }
                    tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[37]);

                    if (unlikely(tmp_subscript_value_8 == NULL)) {
                        tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
                    }

                    if (tmp_subscript_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;

                        goto tuple_build_exception_4;
                    }
                    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;

                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_subscript_value_7);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_6);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_2);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_5);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_10);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_subscript_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 2, tmp_tuple_element_2);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_2;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_7);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_value_12);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_Ellipsis;
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_6);
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 4, tmp_tuple_element_2);
            tmp_tuple_element_2 = (PyObject *)&PyBytes_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 5, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_8;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = mod_consts[47];
        tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_19;
            PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_8);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_7;
            }
            tmp_subscript_value_14 = mod_consts[48];
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_14);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_8);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_7;
            }
            tmp_subscript_value_15 = mod_consts[49];
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_15);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 2, tmp_tuple_element_8);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_7;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_7;
            }
            tmp_subscript_value_17 = mod_consts[48];
            tmp_subscript_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_17);
            if (tmp_subscript_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_16);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 3, tmp_tuple_element_8);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_7;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_7;
            }
            tmp_subscript_value_19 = mod_consts[49];
            tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_19);
            if (tmp_subscript_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_13, 4, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_tuple_element_9;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = mod_consts[51];
        tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_23;
            PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_20, 1, tmp_tuple_element_9);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_21 = mod_consts[48];
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_21);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_20, 2, tmp_tuple_element_9);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_8;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_23 = mod_consts[48];
            tmp_subscript_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_23);
            if (tmp_subscript_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_20, 3, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_tuple_element_10;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_tuple_element_12;
            PyTuple_SET_ITEM0(tmp_subscript_value_24, 0, tmp_tuple_element_10);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_26;
                PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_11);
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_10;
                }
                tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
                tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_26);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_subscript_value_25);
            goto tuple_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_25);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_10);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_29;
                PyTuple_SET_ITEM0(tmp_subscript_value_27, 0, tmp_tuple_element_12);
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;

                    goto tuple_build_exception_11;
                }
                tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_28);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_27, 1, tmp_tuple_element_12);
                tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_29 == NULL)) {
                    tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;

                    goto tuple_build_exception_11;
                }
                tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
                tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_29);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_27, 2, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_subscript_value_27);
            goto tuple_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_27);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_24, 2, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_subscript_value_24);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_24);
        Py_DECREF(tmp_subscript_value_24);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_tuple_element_13;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_13 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_31;
            PyTuple_SET_ITEM0(tmp_subscript_value_30, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = (PyObject *)&PyBool_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_30, 1, tmp_tuple_element_13);
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[54]);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_30, 2, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_subscript_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_30);
        Py_DECREF(tmp_subscript_value_30);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_32 = (PyObject *)&PyFloat_Type;
        tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_32);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_34;
            PyTuple_SET_ITEM(tmp_subscript_value_31, 0, tmp_tuple_element_14);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_13;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_13;
            }
            tmp_subscript_value_34 = (PyObject *)&PyFloat_Type;
            tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_34);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_13;
            }
            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_37;
                PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_15);
                tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_36 == NULL)) {
                    tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_14;
                }
                tmp_subscript_value_35 = (PyObject *)&PyFloat_Type;
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_35);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_15);
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_14;
                }
                tmp_subscript_value_36 = (PyObject *)&PyFloat_Type;
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_36);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_33, 2, tmp_tuple_element_15);
                tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_38 == NULL)) {
                    tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_14;
                }
                tmp_subscript_value_37 = (PyObject *)&PyFloat_Type;
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_37);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_33, 3, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_subscript_value_33);
            goto tuple_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_33);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_31, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_subscript_value_31, 2, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_subscript_value_31);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_31);
        Py_DECREF(tmp_subscript_value_31);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_tuple_element_16;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_tuple_element_17;
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[58];
            PyTuple_SET_ITEM0(tmp_subscript_value_38, 1, tmp_tuple_element_16);
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_15;
            }
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_15;
            }
            tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_40;
                PyObject *tmp_tuple_element_18;
                PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_17);
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_16;
                }
                tmp_tuple_element_18 = Py_None;
                tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_40, 0, tmp_tuple_element_18);
                tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[44]);

                if (unlikely(tmp_tuple_element_18 == NULL)) {
                    tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
                }

                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_40, 1, tmp_tuple_element_18);
                tmp_tuple_element_18 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_subscript_value_40, 2, tmp_tuple_element_18);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_subscript_value_40);
                goto tuple_build_exception_16;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_40);
                Py_DECREF(tmp_subscript_value_40);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_39, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_subscript_value_39);
            goto tuple_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_39);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_38, 2, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_subscript_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_38);
        Py_DECREF(tmp_subscript_value_38);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_43;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = mod_consts[60];
        tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_43);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_44;
            PyTuple_SET_ITEM(tmp_subscript_value_42, 0, tmp_tuple_element_20);
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_18;
            }
            tmp_subscript_value_44 = mod_consts[60];
            tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_44);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_subscript_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_42);
        Py_DECREF(tmp_subscript_value_42);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_41 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_45;
            PyTuple_SET_ITEM(tmp_subscript_value_41, 0, tmp_tuple_element_19);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_19;
            }
            tmp_subscript_value_45 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[61], "li");
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_45);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_41, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_subscript_value_41, 2, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_subscript_value_41);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_41);
        Py_DECREF(tmp_subscript_value_41);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_tuple_element_21;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_21 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_48;
            PyTuple_SET_ITEM0(tmp_subscript_value_46, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = (PyObject *)&PyBytes_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_46, 1, tmp_tuple_element_21);
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_20;
            }
            tmp_subscript_value_47 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_47);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_46, 2, tmp_tuple_element_21);
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_20;
            }
            tmp_subscript_value_48 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_48);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_46, 3, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_subscript_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_46);
        Py_DECREF(tmp_subscript_value_46);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_49;
        PyObject *tmp_tuple_element_22;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_22 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_49 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_51;
            PyTuple_SET_ITEM0(tmp_subscript_value_49, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = (PyObject *)&PyBytes_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_49, 1, tmp_tuple_element_22);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_21;
            }
            tmp_subscript_value_50 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_50);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_49, 2, tmp_tuple_element_22);
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_21;
            }
            tmp_subscript_value_51 = (PyObject *)&PyBytes_Type;
            tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_51);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_49, 3, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_subscript_value_49);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_49);
        Py_DECREF(tmp_subscript_value_49);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_tuple_element_23;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_23 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_52 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_52, 0, tmp_tuple_element_23);
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_52, 1, tmp_tuple_element_23);
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_subscript_value_52);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_52);
        Py_DECREF(tmp_subscript_value_52);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_53;
        PyObject *tmp_tuple_element_24;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_24 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_53 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_53, 0, tmp_tuple_element_24);
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto tuple_build_exception_23;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_53, 1, tmp_tuple_element_24);
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_subscript_value_53);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_53);
        Py_DECREF(tmp_subscript_value_53);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_54;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_55;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_55 = (PyObject *)&PyBytes_Type;
        tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_55);
        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_54 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_subscript_value_54, 0, tmp_tuple_element_25);
        tmp_tuple_element_25 = (PyObject *)&PyBytes_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_54, 1, tmp_tuple_element_25);
        tmp_tuple_element_25 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_54, 2, tmp_tuple_element_25);
        tmp_assign_source_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_54);
        Py_DECREF(tmp_subscript_value_54);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_56;
        PyObject *tmp_tuple_element_26;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_tuple_element_26 == NULL));
        tmp_subscript_value_56 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_59;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_60;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_62;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_63;
            PyTuple_SET_ITEM0(tmp_subscript_value_56, 0, tmp_tuple_element_26);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_24;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_58 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_58);
            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_57 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_57, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_57, 1, tmp_tuple_element_27);
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_subscript_value_57);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_57);
            Py_DECREF(tmp_subscript_value_57);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_56, 1, tmp_tuple_element_26);
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_24;
            }
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_60 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_60);
            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_59 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_62;
                PyObject *tmp_subscript_value_61;
                PyTuple_SET_ITEM(tmp_subscript_value_59, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[68]);

                if (unlikely(tmp_tuple_element_28 == NULL)) {
                    tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                }

                if (tmp_tuple_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;

                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_59, 1, tmp_tuple_element_28);
                tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_62 == NULL)) {
                    tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;

                    goto tuple_build_exception_26;
                }
                tmp_subscript_value_61 = (PyObject *)&PyUnicode_Type;
                tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_61);
                if (tmp_tuple_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;

                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_59, 2, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_subscript_value_59);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_59);
            Py_DECREF(tmp_subscript_value_59);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_56, 2, tmp_tuple_element_26);
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_63 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_63);
            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_expression_value_65;
                PyObject *tmp_subscript_value_64;
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_65;
                PyTuple_SET_ITEM(tmp_subscript_value_62, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[68]);

                if (unlikely(tmp_tuple_element_29 == NULL)) {
                    tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
                }

                if (tmp_tuple_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_62, 1, tmp_tuple_element_29);
                tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_expression_value_65 == NULL)) {
                    tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
                }

                if (tmp_expression_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;

                    goto tuple_build_exception_27;
                }
                tmp_subscript_value_64 = (PyObject *)&PyUnicode_Type;
                tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_64);
                if (tmp_tuple_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_62, 2, tmp_tuple_element_29);
                tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

                if (unlikely(tmp_expression_value_66 == NULL)) {
                    tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                }

                if (tmp_expression_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;

                    goto tuple_build_exception_27;
                }
                tmp_subscript_value_65 = mod_consts[48];
                tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_65);
                if (tmp_tuple_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_62, 3, tmp_tuple_element_29);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_subscript_value_62);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_62);
            Py_DECREF(tmp_subscript_value_62);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_56, 3, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_subscript_value_56);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_assign_source_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_56);
        Py_DECREF(tmp_subscript_value_56);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_66;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_67;
        PyObject *tmp_tuple_element_31;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_31 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_67 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_67, 0, tmp_tuple_element_31);
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        assert(!(tmp_tuple_element_31 == NULL));
        PyTuple_SET_ITEM0(tmp_subscript_value_67, 1, tmp_tuple_element_31);
        tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_67);
        Py_DECREF(tmp_subscript_value_67);
        if (tmp_tuple_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_66 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_68;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_69;
            PyObject *tmp_tuple_element_32;
            PyTuple_SET_ITEM(tmp_subscript_value_66, 0, tmp_tuple_element_30);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_28;
            }
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_28;
            }
            tmp_tuple_element_32 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_69 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_69, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_69, 1, tmp_tuple_element_32);
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_subscript_value_69);
            goto tuple_build_exception_28;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_subscript_value_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_69);
            Py_DECREF(tmp_subscript_value_69);
            if (tmp_subscript_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_28;
            }
            tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_68);
            Py_DECREF(tmp_subscript_value_68);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_66, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_subscript_value_66);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_66);
        Py_DECREF(tmp_subscript_value_66);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_70;
        PyObject *tmp_tuple_element_33;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_33 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_70 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_70, 0, tmp_tuple_element_33);
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto tuple_build_exception_30;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_70, 1, tmp_tuple_element_33);
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_subscript_value_70);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        tmp_assign_source_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_70);
        Py_DECREF(tmp_subscript_value_70);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_43;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpx$_types$$$class__1_SyncByteStream_110 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__1_SyncByteStream_110, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__1_SyncByteStream_110, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_361e510b9b8d780b90b40ac88c318874_2 = MAKE_CLASS_FRAME(tstate, codeobj_361e510b9b8d780b90b40ac88c318874, module_httpx$_types, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_361e510b9b8d780b90b40ac88c318874_2);
        assert(Py_REFCNT(frame_361e510b9b8d780b90b40ac88c318874_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_71;
            tmp_dict_key_1 = mod_consts[76];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_71 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_71);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__1___iter__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__1_SyncByteStream_110, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_361e510b9b8d780b90b40ac88c318874_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_361e510b9b8d780b90b40ac88c318874_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_361e510b9b8d780b90b40ac88c318874_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_361e510b9b8d780b90b40ac88c318874_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_361e510b9b8d780b90b40ac88c318874_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[77]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__2_close(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__1_SyncByteStream_110, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_34 = mod_consts[74];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = mod_consts[81];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_httpx$_types$$$class__1_SyncByteStream_110;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_dd9b5ced6aa636eaee85ad7e205a487d->m_frame.f_lineno = 110;
            tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_44 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_httpx$_types$$$class__1_SyncByteStream_110);
        locals_httpx$_types$$$class__1_SyncByteStream_110 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_types$$$class__1_SyncByteStream_110);
        locals_httpx$_types$$$class__1_SyncByteStream_110 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 110;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_44);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_47;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpx$_types$$$class__2_AsyncByteStream_124 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__2_AsyncByteStream_124, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__2_AsyncByteStream_124, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_644a903c3ccd7a8331fd99d5dab57071_3 = MAKE_CLASS_FRAME(tstate, codeobj_644a903c3ccd7a8331fd99d5dab57071, module_httpx$_types, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_644a903c3ccd7a8331fd99d5dab57071_3);
        assert(Py_REFCNT(frame_644a903c3ccd7a8331fd99d5dab57071_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_72;
            tmp_dict_key_2 = mod_consts[76];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_72 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_72);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__3___aiter__(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__2_AsyncByteStream_124, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_644a903c3ccd7a8331fd99d5dab57071_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_644a903c3ccd7a8331fd99d5dab57071_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_644a903c3ccd7a8331fd99d5dab57071_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_644a903c3ccd7a8331fd99d5dab57071_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_644a903c3ccd7a8331fd99d5dab57071_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[77]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_types$$$function__4_aclose(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_httpx$_types$$$class__2_AsyncByteStream_124, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_35 = mod_consts[82];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = mod_consts[81];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_httpx$_types$$$class__2_AsyncByteStream_124;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_dd9b5ced6aa636eaee85ad7e205a487d->m_frame.f_lineno = 124;
            tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_49;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_48 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_httpx$_types$$$class__2_AsyncByteStream_124);
        locals_httpx$_types$$$class__2_AsyncByteStream_124 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_types$$$class__2_AsyncByteStream_124);
        locals_httpx$_types$$$class__2_AsyncByteStream_124 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 124;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpx$_types, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_48);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd9b5ced6aa636eaee85ad7e205a487d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd9b5ced6aa636eaee85ad7e205a487d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd9b5ced6aa636eaee85ad7e205a487d, exception_lineno);
    }



    assertFrameObject(frame_dd9b5ced6aa636eaee85ad7e205a487d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_types", false);

    Py_INCREF(module_httpx$_types);
    return module_httpx$_types;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_types", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
