
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 512 > 0
static unsigned char *bytecode_data[512];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_backends(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_backends$_asyncio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_eventloop(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_fileio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_resources(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_signals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_sockets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_streams(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_subprocesses(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_synchronization(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_tasks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_testing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$_core$_typedattr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_eventloop(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_resources(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_sockets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_streams(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_subprocesses(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_tasks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$abc$_testing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$from_thread(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$lowlevel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams$memory(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams$stapled(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$streams$tls(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_anyio$to_thread(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bottle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bottle_websocket(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bottle_websocket$plugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bottle_websocket$server(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachinedict(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$johabfreq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$johabprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langrussianmodel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$macromanprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$resultdict(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf1632prober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_termui_impl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$_textwrap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$decorators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$formatting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$globals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$shell_completion(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$termui(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_click$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eel$browsers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eel$chrome(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eel$edge(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eel$electron(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_eel$types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_catch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_formatting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_suppress(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_exceptiongroup$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_abstract_linkable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_ffi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_ffi$callback(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_ffi$loop(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_ffi$watcher(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_fileobjectcommon(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_fileobjectposix(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_greenlet_primitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_hub_local(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_hub_primitives(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_ident(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_imap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_interfaces(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_monitor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_semaphore(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_socket3(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_socketcommon(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_tblib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_threading(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_tracer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$_waiter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$baseserver(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$builtins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$event(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$events(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$fileobject(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$greenlet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$hub(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$libev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$libev$corecffi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$libev$watcher(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$local(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$lock(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$monkey(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$os(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$pool(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$pywsgi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$queue(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$resolver(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$resolver$_addresses(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$resolver$ares(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$resolver$blocking(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$resolver$thread(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$resolver_ares(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$resolver_thread(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$select(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$server(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$signal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$socket(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$ssl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$subprocess(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$thread(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$threading(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$threadpool(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$time(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$timeout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gevent$win32util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$handler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$logging(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$protocols(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$protocols$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$resource(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$server(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$utf8validator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_geventwebsocket$websocket(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_greenlet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_abnf(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_events(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_headers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_readers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_receivebuffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_state(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h11$_writers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$connection_pool(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$http11(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$http2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$http_proxy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$interfaces(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_async$socks_proxy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_backends(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_backends$anyio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_backends$auto(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_backends$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_backends$mock(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_backends$sync(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_backends$trio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_ssl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$connection_pool(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$http11(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$http2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$http_proxy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$interfaces(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_sync$socks_proxy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_synchronization(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_trace(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpcore$_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$__version__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_auth(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_client(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_content(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_decoders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_main(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_multipart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_status_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$asgi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$default(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$mock(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_transports$wsgi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_urlparse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_urls(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_httpx$_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mkl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$__version__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$candles(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$indices(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$market(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$metrics(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$models$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$models$metrics(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$session(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$shares(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$tickers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_moexalgo$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$expressions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$necompiler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numexpr$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_array_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_char_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_dtype_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nbit(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nested_sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_shape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils$_convertions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils$_inspect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$dates(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$display(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$localization(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$tslibs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version_meson(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$indexers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$interchange(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$arrays(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_optional(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$compressors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy$function(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pickle_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pyarrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$executor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$algorithms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$apply(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$datetimelike_accumulations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_accumulations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_reductions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$putmask(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$quantile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$replace(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$take(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$transforms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arraylike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_arrow_string_mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_ranges(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$_arrow_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$extension_types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$boolean(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$categorical(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimelike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$floating(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$integer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$masked(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numpy_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$period(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$scipy_sparse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_arrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$align(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$engines(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$eval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expressions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$parsing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$pytables(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$scope(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$config_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$construction(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$astype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$cast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$inference(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$flags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$frame(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$categorical(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$grouper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$indexing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$objects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$accessors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$category(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimelike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$extension(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$frozen(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$multi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$period(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$range(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$buffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$column(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe_protocol(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$from_dataframe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$array_manager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$blocks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$construction(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$managers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$describe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$selectn(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$to_dict(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$nanops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$array_ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$dispatch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$docstrings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$invalid(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$mask_ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$resample(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$encoding(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$melt(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$merge(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$pivot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$reshape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$tile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$roperator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sample(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$series(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$shared_docs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sorting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$object_array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$times(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$hashing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$doc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$ewm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$expanding(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$online(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$rolling(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$errors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboards(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odfreader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odswriter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_openpyxl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_pyxlsb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlrd(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlsxwriter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$feather_format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$_color_data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$console(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$css(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$csvs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$printing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$string(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style_render(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$xml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$gbq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_json(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_normalize(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_table_schema(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$orc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parquet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$arrow_parser_wrapper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$base_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$c_parser_wrapper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$python_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$readers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pytables(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas7bdat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_xport(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sasreader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$spss(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sql(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$stata(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$xml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$boxplot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$converter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$hist(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$misc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$timeseries(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$tools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_misc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$frequencies(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$offsets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_decorators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_print_versions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_validators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pkg_resources$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$filter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$filters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$formatter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$lexer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$lexers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$lexers$_mapping(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$modeline(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$plugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$regexopt(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$_mapping(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$abap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$algol(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$algol_nu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$arduino(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$autumn(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$borland(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$bw(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$colorful(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$default(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$dracula(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$emacs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$friendly(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$friendly_grayscale(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$fruity(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$gh_dark(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$gruvbox(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$igor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$inkpot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$lightbulb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$lilypond(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$lovelace(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$manni(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$material(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$monokai(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$murphy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$native(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$nord(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$onedark(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$paraiso_dark(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$paraiso_light(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$pastie(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$perldoc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$rainbow_dash(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$rrt(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$sas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$solarized(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$staroffice(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$stata_dark(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$stata_light(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$tango(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$trac(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$vim(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$vs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$xcode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$styles$zenburn(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$token(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygments$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$actions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$diagram(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$helpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$results(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$testing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$unicode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$lazy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzfile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzinfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio$_impl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sniffio$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_typing_extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_whichcraft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$composer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$constructor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$cyaml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$dumper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$emitter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$error(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$events(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$loader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$reader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$representer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$resolver(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$scanner(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$serializer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_yaml$tokens(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$event(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$declarations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$interface(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$interfaces(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zope$interface$ro(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_blake2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_codecs_cn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_codecs_hk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_codecs_jp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_codecs_kr", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_codecs_tw", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_contextvars", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_csv", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_datetime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_elementtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_heapq", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_md5", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_multibytecodec", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_opcode", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pickle", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_posixshmem", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_posixsubprocess", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_random", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sha1", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sha256", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sha3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sha512", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_statistics", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_struct", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_uuid", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio", modulecode_anyio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._backends", modulecode_anyio$_backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._backends._asyncio", modulecode_anyio$_backends$_asyncio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core", modulecode_anyio$_core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._eventloop", modulecode_anyio$_core$_eventloop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._exceptions", modulecode_anyio$_core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._fileio", modulecode_anyio$_core$_fileio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._resources", modulecode_anyio$_core$_resources, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._signals", modulecode_anyio$_core$_signals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._sockets", modulecode_anyio$_core$_sockets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._streams", modulecode_anyio$_core$_streams, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._subprocesses", modulecode_anyio$_core$_subprocesses, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._synchronization", modulecode_anyio$_core$_synchronization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._tasks", modulecode_anyio$_core$_tasks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._testing", modulecode_anyio$_core$_testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio._core._typedattr", modulecode_anyio$_core$_typedattr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc", modulecode_anyio$abc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc._eventloop", modulecode_anyio$abc$_eventloop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc._resources", modulecode_anyio$abc$_resources, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc._sockets", modulecode_anyio$abc$_sockets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc._streams", modulecode_anyio$abc$_streams, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc._subprocesses", modulecode_anyio$abc$_subprocesses, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc._tasks", modulecode_anyio$abc$_tasks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.abc._testing", modulecode_anyio$abc$_testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.from_thread", modulecode_anyio$from_thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.lowlevel", modulecode_anyio$lowlevel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.streams", modulecode_anyio$streams, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.streams.memory", modulecode_anyio$streams$memory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.streams.stapled", modulecode_anyio$streams$stapled, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.streams.tls", modulecode_anyio$streams$tls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"anyio.to_thread", modulecode_anyio$to_thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"array", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"binascii", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bottle", modulecode_bottle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bottle_websocket", modulecode_bottle_websocket, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bottle_websocket.plugin", modulecode_bottle_websocket$plugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bottle_websocket.server", modulecode_bottle_websocket$server, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.codingstatemachinedict", modulecode_chardet$codingstatemachinedict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.enums", modulecode_chardet$enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.johabfreq", modulecode_chardet$johabfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.johabprober", modulecode_chardet$johabprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langrussianmodel", modulecode_chardet$langrussianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.macromanprober", modulecode_chardet$macromanprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.resultdict", modulecode_chardet$resultdict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.utf1632prober", modulecode_chardet$utf1632prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.version", modulecode_chardet$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click", modulecode_click, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click._compat", modulecode_click$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click._termui_impl", modulecode_click$_termui_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click._textwrap", modulecode_click$_textwrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.core", modulecode_click$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.decorators", modulecode_click$decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.exceptions", modulecode_click$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.formatting", modulecode_click$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.globals", modulecode_click$globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.parser", modulecode_click$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.shell_completion", modulecode_click$shell_completion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.termui", modulecode_click$termui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.types", modulecode_click$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"click.utils", modulecode_click$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"eel", modulecode_eel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"eel.browsers", modulecode_eel$browsers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"eel.chrome", modulecode_eel$chrome, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"eel.edge", modulecode_eel$edge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"eel.electron", modulecode_eel$electron, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"eel.types", modulecode_eel$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"exceptiongroup", modulecode_exceptiongroup, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"exceptiongroup._catch", modulecode_exceptiongroup$_catch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"exceptiongroup._exceptions", modulecode_exceptiongroup$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"exceptiongroup._formatting", modulecode_exceptiongroup$_formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"exceptiongroup._suppress", modulecode_exceptiongroup$_suppress, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"exceptiongroup._version", modulecode_exceptiongroup$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fcntl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent", modulecode_gevent, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent-postLoad", modulecode_gevent$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._abstract_linkable", modulecode_gevent$_abstract_linkable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._compat", modulecode_gevent$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._config", modulecode_gevent$_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._ffi", modulecode_gevent$_ffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._ffi.callback", modulecode_gevent$_ffi$callback, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._ffi.loop", modulecode_gevent$_ffi$loop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._ffi.watcher", modulecode_gevent$_ffi$watcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._fileobjectcommon", modulecode_gevent$_fileobjectcommon, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._fileobjectposix", modulecode_gevent$_fileobjectposix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_abstract_linkable", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_greenlet_primitives", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_hub_local", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_hub_primitives", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_ident", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_imap", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_semaphore", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_c_waiter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_cevent", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_cgreenlet", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_clocal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._gevent_cqueue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._greenlet_primitives", modulecode_gevent$_greenlet_primitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._hub_local", modulecode_gevent$_hub_local, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._hub_primitives", modulecode_gevent$_hub_primitives, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._ident", modulecode_gevent$_ident, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._imap", modulecode_gevent$_imap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._interfaces", modulecode_gevent$_interfaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._monitor", modulecode_gevent$_monitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._semaphore", modulecode_gevent$_semaphore, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._socket3", modulecode_gevent$_socket3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._socketcommon", modulecode_gevent$_socketcommon, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._tblib", modulecode_gevent$_tblib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._threading", modulecode_gevent$_threading, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._tracer", modulecode_gevent$_tracer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._util", modulecode_gevent$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent._waiter", modulecode_gevent$_waiter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.baseserver", modulecode_gevent$baseserver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.builtins", modulecode_gevent$builtins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.core", modulecode_gevent$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.event", modulecode_gevent$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.events", modulecode_gevent$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.exceptions", modulecode_gevent$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.fileobject", modulecode_gevent$fileobject, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.greenlet", modulecode_gevent$greenlet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.hub", modulecode_gevent$hub, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.libev", modulecode_gevent$libev, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.libev._corecffi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.libev.corecext", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.libev.corecffi", modulecode_gevent$libev$corecffi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.libev.watcher", modulecode_gevent$libev$watcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.local", modulecode_gevent$local, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.lock", modulecode_gevent$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.monkey", modulecode_gevent$monkey, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.os", modulecode_gevent$os, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.pool", modulecode_gevent$pool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.pywsgi", modulecode_gevent$pywsgi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.queue", modulecode_gevent$queue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver", modulecode_gevent$resolver, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver._addresses", modulecode_gevent$resolver$_addresses, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver.ares", modulecode_gevent$resolver$ares, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver.blocking", modulecode_gevent$resolver$blocking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver.cares", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver.thread", modulecode_gevent$resolver$thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver_ares", modulecode_gevent$resolver_ares, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.resolver_thread", modulecode_gevent$resolver_thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.select", modulecode_gevent$select, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.server", modulecode_gevent$server, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.signal", modulecode_gevent$signal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.socket", modulecode_gevent$socket, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.ssl", modulecode_gevent$ssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.subprocess", modulecode_gevent$subprocess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.thread", modulecode_gevent$thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.threading", modulecode_gevent$threading, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.threadpool", modulecode_gevent$threadpool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.time", modulecode_gevent$time, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.timeout", modulecode_gevent$timeout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.util", modulecode_gevent$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gevent.win32util", modulecode_gevent$win32util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket", modulecode_geventwebsocket, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket._compat", modulecode_geventwebsocket$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.exceptions", modulecode_geventwebsocket$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.handler", modulecode_geventwebsocket$handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.logging", modulecode_geventwebsocket$logging, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.protocols", modulecode_geventwebsocket$protocols, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.protocols.base", modulecode_geventwebsocket$protocols$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.resource", modulecode_geventwebsocket$resource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.server", modulecode_geventwebsocket$server, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.utf8validator", modulecode_geventwebsocket$utf8validator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.utils", modulecode_geventwebsocket$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"geventwebsocket.websocket", modulecode_geventwebsocket$websocket, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"greenlet", modulecode_greenlet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"greenlet._greenlet", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"grp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11", modulecode_h11, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._abnf", modulecode_h11$_abnf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._connection", modulecode_h11$_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._events", modulecode_h11$_events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._headers", modulecode_h11$_headers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._readers", modulecode_h11$_readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._receivebuffer", modulecode_h11$_receivebuffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._state", modulecode_h11$_state, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._util", modulecode_h11$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._version", modulecode_h11$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h11._writers", modulecode_h11$_writers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore", modulecode_httpcore, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._api", modulecode_httpcore$_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async", modulecode_httpcore$_async, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async.connection", modulecode_httpcore$_async$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async.connection_pool", modulecode_httpcore$_async$connection_pool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async.http11", modulecode_httpcore$_async$http11, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async.http2", modulecode_httpcore$_async$http2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async.http_proxy", modulecode_httpcore$_async$http_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async.interfaces", modulecode_httpcore$_async$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._async.socks_proxy", modulecode_httpcore$_async$socks_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._backends", modulecode_httpcore$_backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._backends.anyio", modulecode_httpcore$_backends$anyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._backends.auto", modulecode_httpcore$_backends$auto, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._backends.base", modulecode_httpcore$_backends$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._backends.mock", modulecode_httpcore$_backends$mock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._backends.sync", modulecode_httpcore$_backends$sync, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._backends.trio", modulecode_httpcore$_backends$trio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._exceptions", modulecode_httpcore$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._models", modulecode_httpcore$_models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._ssl", modulecode_httpcore$_ssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync", modulecode_httpcore$_sync, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync.connection", modulecode_httpcore$_sync$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync.connection_pool", modulecode_httpcore$_sync$connection_pool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync.http11", modulecode_httpcore$_sync$http11, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync.http2", modulecode_httpcore$_sync$http2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync.http_proxy", modulecode_httpcore$_sync$http_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync.interfaces", modulecode_httpcore$_sync$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._sync.socks_proxy", modulecode_httpcore$_sync$socks_proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._synchronization", modulecode_httpcore$_synchronization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._trace", modulecode_httpcore$_trace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpcore._utils", modulecode_httpcore$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx", modulecode_httpx, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx.__version__", modulecode_httpx$__version__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._api", modulecode_httpx$_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._auth", modulecode_httpx$_auth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._client", modulecode_httpx$_client, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._compat", modulecode_httpx$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._config", modulecode_httpx$_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._content", modulecode_httpx$_content, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._decoders", modulecode_httpx$_decoders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._exceptions", modulecode_httpx$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._main", modulecode_httpx$_main, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._models", modulecode_httpx$_models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._multipart", modulecode_httpx$_multipart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._status_codes", modulecode_httpx$_status_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._transports", modulecode_httpx$_transports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._transports.asgi", modulecode_httpx$_transports$asgi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._transports.base", modulecode_httpx$_transports$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._transports.default", modulecode_httpx$_transports$default, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._transports.mock", modulecode_httpx$_transports$mock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._transports.wsgi", modulecode_httpx$_transports$wsgi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._types", modulecode_httpx$_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._urlparse", modulecode_httpx$_urlparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._urls", modulecode_httpx$_urls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"httpx._utils", modulecode_httpx$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe._speedups", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"math", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mkl", modulecode_mkl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mkl._mklinit", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mkl._py_mkl_service", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mmap", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo", modulecode_moexalgo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.__version__", modulecode_moexalgo$__version__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.candles", modulecode_moexalgo$candles, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.indices", modulecode_moexalgo$indices, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.market", modulecode_moexalgo$market, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.metrics", modulecode_moexalgo$metrics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.models", modulecode_moexalgo$models, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.models.common", modulecode_moexalgo$models$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.models.metrics", modulecode_moexalgo$models$metrics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.session", modulecode_moexalgo$session, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.shares", modulecode_moexalgo$shares, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.tickers", modulecode_moexalgo$tickers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"moexalgo.utils", modulecode_moexalgo$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numexpr", modulecode_numexpr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numexpr.expressions", modulecode_numexpr$expressions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numexpr.interpreter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numexpr.necompiler", modulecode_numexpr$necompiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numexpr.utils", modulecode_numexpr$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numexpr.version", modulecode_numexpr$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing", modulecode_numpy$_typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing._array_like", modulecode_numpy$_typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing._char_codes", modulecode_numpy$_typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing._dtype_like", modulecode_numpy$_typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing._nbit", modulecode_numpy$_typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing._nested_sequence", modulecode_numpy$_typing$_nested_sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing._scalars", modulecode_numpy$_typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._typing._shape", modulecode_numpy$_typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._utils", modulecode_numpy$_utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._utils._convertions", modulecode_numpy$_utils$_convertions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._utils._inspect", modulecode_numpy$_utils$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._multiarray_tests", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.dtypes", modulecode_numpy$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.exceptions", modulecode_numpy$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft._pocketfft_internal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._bounded_integers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._common", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._mt19937", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._pcg64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._philox", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._sfc64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random.bit_generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random.mtrand", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas", modulecode_pandas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config", modulecode_pandas$_config, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.config", modulecode_pandas$_config$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.dates", modulecode_pandas$_config$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.display", modulecode_pandas$_config$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.localization", modulecode_pandas$_config$localization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs", modulecode_pandas$_libs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.algos", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.arrays", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.byteswap", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.groupby", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.hashing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.hashtable", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.index", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.indexing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.internals", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.interval", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.join", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.json", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.lib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.missing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.ops", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.ops_dispatch", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.pandas_datetime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.pandas_parser", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.parsers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.properties", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.reshape", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.sas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.sparse", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs", modulecode_pandas$_libs$tslibs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.base", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.ccalendar", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.conversion", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.dtypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.fields", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.nattype", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.np_datetime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.offsets", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.parsing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.period", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.strptime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.timedeltas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.timestamps", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.timezones", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.tzconversion", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.vectorized", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.window", modulecode_pandas$_libs$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.window.aggregations", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.window.indexers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.writers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._typing", modulecode_pandas$_typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._version", modulecode_pandas$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._version_meson", modulecode_pandas$_version_meson, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api", modulecode_pandas$api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.extensions", modulecode_pandas$api$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.indexers", modulecode_pandas$api$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.interchange", modulecode_pandas$api$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.types", modulecode_pandas$api$types, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.typing", modulecode_pandas$api$typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.arrays", modulecode_pandas$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat", modulecode_pandas$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat._constants", modulecode_pandas$compat$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat._optional", modulecode_pandas$compat$_optional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.compressors", modulecode_pandas$compat$compressors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.numpy", modulecode_pandas$compat$numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.numpy.function", modulecode_pandas$compat$numpy$function, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.pickle_compat", modulecode_pandas$compat$pickle_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.pyarrow", modulecode_pandas$compat$pyarrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core", modulecode_pandas$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core._numba", modulecode_pandas$core$_numba, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core._numba.executor", modulecode_pandas$core$_numba$executor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.accessor", modulecode_pandas$core$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.algorithms", modulecode_pandas$core$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.api", modulecode_pandas$core$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.apply", modulecode_pandas$core$apply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos", modulecode_pandas$core$array_algos, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.datetimelike_accumulations", modulecode_pandas$core$array_algos$datetimelike_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.masked_accumulations", modulecode_pandas$core$array_algos$masked_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.masked_reductions", modulecode_pandas$core$array_algos$masked_reductions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.putmask", modulecode_pandas$core$array_algos$putmask, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.quantile", modulecode_pandas$core$array_algos$quantile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.replace", modulecode_pandas$core$array_algos$replace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.take", modulecode_pandas$core$array_algos$take, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.transforms", modulecode_pandas$core$array_algos$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arraylike", modulecode_pandas$core$arraylike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays", modulecode_pandas$core$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays._arrow_string_mixins", modulecode_pandas$core$arrays$_arrow_string_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays._mixins", modulecode_pandas$core$arrays$_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays._ranges", modulecode_pandas$core$arrays$_ranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.arrow", modulecode_pandas$core$arrays$arrow, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.arrow._arrow_utils", modulecode_pandas$core$arrays$arrow$_arrow_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.arrow.array", modulecode_pandas$core$arrays$arrow$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.arrow.extension_types", modulecode_pandas$core$arrays$arrow$extension_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.base", modulecode_pandas$core$arrays$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.boolean", modulecode_pandas$core$arrays$boolean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.categorical", modulecode_pandas$core$arrays$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.datetimelike", modulecode_pandas$core$arrays$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.datetimes", modulecode_pandas$core$arrays$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.floating", modulecode_pandas$core$arrays$floating, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.integer", modulecode_pandas$core$arrays$integer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.interval", modulecode_pandas$core$arrays$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.masked", modulecode_pandas$core$arrays$masked, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.numeric", modulecode_pandas$core$arrays$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.numpy_", modulecode_pandas$core$arrays$numpy_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.period", modulecode_pandas$core$arrays$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse", modulecode_pandas$core$arrays$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse.accessor", modulecode_pandas$core$arrays$sparse$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse.array", modulecode_pandas$core$arrays$sparse$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse.scipy_sparse", modulecode_pandas$core$arrays$sparse$scipy_sparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.string_", modulecode_pandas$core$arrays$string_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.string_arrow", modulecode_pandas$core$arrays$string_arrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.timedeltas", modulecode_pandas$core$arrays$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.base", modulecode_pandas$core$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.common", modulecode_pandas$core$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation", modulecode_pandas$core$computation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.align", modulecode_pandas$core$computation$align, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.api", modulecode_pandas$core$computation$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.check", modulecode_pandas$core$computation$check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.common", modulecode_pandas$core$computation$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.engines", modulecode_pandas$core$computation$engines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.eval", modulecode_pandas$core$computation$eval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.expr", modulecode_pandas$core$computation$expr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.expressions", modulecode_pandas$core$computation$expressions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.ops", modulecode_pandas$core$computation$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.parsing", modulecode_pandas$core$computation$parsing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.pytables", modulecode_pandas$core$computation$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.scope", modulecode_pandas$core$computation$scope, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.config_init", modulecode_pandas$core$config_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.construction", modulecode_pandas$core$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes", modulecode_pandas$core$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.api", modulecode_pandas$core$dtypes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.astype", modulecode_pandas$core$dtypes$astype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.base", modulecode_pandas$core$dtypes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.cast", modulecode_pandas$core$dtypes$cast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.common", modulecode_pandas$core$dtypes$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.concat", modulecode_pandas$core$dtypes$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.dtypes", modulecode_pandas$core$dtypes$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.generic", modulecode_pandas$core$dtypes$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.inference", modulecode_pandas$core$dtypes$inference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.missing", modulecode_pandas$core$dtypes$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.flags", modulecode_pandas$core$flags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.frame", modulecode_pandas$core$frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.generic", modulecode_pandas$core$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby", modulecode_pandas$core$groupby, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.base", modulecode_pandas$core$groupby$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.categorical", modulecode_pandas$core$groupby$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.generic", modulecode_pandas$core$groupby$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.groupby", modulecode_pandas$core$groupby$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.grouper", modulecode_pandas$core$groupby$grouper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.indexing", modulecode_pandas$core$groupby$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.numba_", modulecode_pandas$core$groupby$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.ops", modulecode_pandas$core$groupby$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexers", modulecode_pandas$core$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexers.objects", modulecode_pandas$core$indexers$objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexers.utils", modulecode_pandas$core$indexers$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes", modulecode_pandas$core$indexes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.accessors", modulecode_pandas$core$indexes$accessors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.api", modulecode_pandas$core$indexes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.base", modulecode_pandas$core$indexes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.category", modulecode_pandas$core$indexes$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.datetimelike", modulecode_pandas$core$indexes$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.datetimes", modulecode_pandas$core$indexes$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.extension", modulecode_pandas$core$indexes$extension, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.frozen", modulecode_pandas$core$indexes$frozen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.interval", modulecode_pandas$core$indexes$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.multi", modulecode_pandas$core$indexes$multi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.period", modulecode_pandas$core$indexes$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.range", modulecode_pandas$core$indexes$range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.timedeltas", modulecode_pandas$core$indexes$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexing", modulecode_pandas$core$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.interchange", modulecode_pandas$core$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.interchange.buffer", modulecode_pandas$core$interchange$buffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.interchange.column", modulecode_pandas$core$interchange$column, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.interchange.dataframe", modulecode_pandas$core$interchange$dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.interchange.dataframe_protocol", modulecode_pandas$core$interchange$dataframe_protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.interchange.from_dataframe", modulecode_pandas$core$interchange$from_dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.interchange.utils", modulecode_pandas$core$interchange$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals", modulecode_pandas$core$internals, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.api", modulecode_pandas$core$internals$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.array_manager", modulecode_pandas$core$internals$array_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.base", modulecode_pandas$core$internals$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.blocks", modulecode_pandas$core$internals$blocks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.concat", modulecode_pandas$core$internals$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.construction", modulecode_pandas$core$internals$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.managers", modulecode_pandas$core$internals$managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.ops", modulecode_pandas$core$internals$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.methods", modulecode_pandas$core$methods, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.methods.describe", modulecode_pandas$core$methods$describe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.methods.selectn", modulecode_pandas$core$methods$selectn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.methods.to_dict", modulecode_pandas$core$methods$to_dict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.missing", modulecode_pandas$core$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.nanops", modulecode_pandas$core$nanops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops", modulecode_pandas$core$ops, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.array_ops", modulecode_pandas$core$ops$array_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.common", modulecode_pandas$core$ops$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.dispatch", modulecode_pandas$core$ops$dispatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.docstrings", modulecode_pandas$core$ops$docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.invalid", modulecode_pandas$core$ops$invalid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.mask_ops", modulecode_pandas$core$ops$mask_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.missing", modulecode_pandas$core$ops$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.resample", modulecode_pandas$core$resample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape", modulecode_pandas$core$reshape, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.api", modulecode_pandas$core$reshape$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.concat", modulecode_pandas$core$reshape$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.encoding", modulecode_pandas$core$reshape$encoding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.melt", modulecode_pandas$core$reshape$melt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.merge", modulecode_pandas$core$reshape$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.pivot", modulecode_pandas$core$reshape$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.reshape", modulecode_pandas$core$reshape$reshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.tile", modulecode_pandas$core$reshape$tile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.util", modulecode_pandas$core$reshape$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.roperator", modulecode_pandas$core$roperator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.sample", modulecode_pandas$core$sample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.series", modulecode_pandas$core$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.shared_docs", modulecode_pandas$core$shared_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.sorting", modulecode_pandas$core$sorting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings", modulecode_pandas$core$strings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings.accessor", modulecode_pandas$core$strings$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings.base", modulecode_pandas$core$strings$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings.object_array", modulecode_pandas$core$strings$object_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools", modulecode_pandas$core$tools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.datetimes", modulecode_pandas$core$tools$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.numeric", modulecode_pandas$core$tools$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.timedeltas", modulecode_pandas$core$tools$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.times", modulecode_pandas$core$tools$times, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.util", modulecode_pandas$core$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.util.hashing", modulecode_pandas$core$util$hashing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.util.numba_", modulecode_pandas$core$util$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window", modulecode_pandas$core$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.common", modulecode_pandas$core$window$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.doc", modulecode_pandas$core$window$doc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.ewm", modulecode_pandas$core$window$ewm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.expanding", modulecode_pandas$core$window$expanding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.numba_", modulecode_pandas$core$window$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.online", modulecode_pandas$core$window$online, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.rolling", modulecode_pandas$core$window$rolling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.errors", modulecode_pandas$errors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io", modulecode_pandas$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io._util", modulecode_pandas$io$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.api", modulecode_pandas$io$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.clipboard", modulecode_pandas$io$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.clipboards", modulecode_pandas$io$clipboards, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.common", modulecode_pandas$io$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel", modulecode_pandas$io$excel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._base", modulecode_pandas$io$excel$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._odfreader", modulecode_pandas$io$excel$_odfreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._odswriter", modulecode_pandas$io$excel$_odswriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._openpyxl", modulecode_pandas$io$excel$_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._pyxlsb", modulecode_pandas$io$excel$_pyxlsb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._util", modulecode_pandas$io$excel$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._xlrd", modulecode_pandas$io$excel$_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._xlsxwriter", modulecode_pandas$io$excel$_xlsxwriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.feather_format", modulecode_pandas$io$feather_format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats", modulecode_pandas$io$formats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats._color_data", modulecode_pandas$io$formats$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.console", modulecode_pandas$io$formats$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.css", modulecode_pandas$io$formats$css, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.csvs", modulecode_pandas$io$formats$csvs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.excel", modulecode_pandas$io$formats$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.format", modulecode_pandas$io$formats$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.html", modulecode_pandas$io$formats$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.info", modulecode_pandas$io$formats$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.printing", modulecode_pandas$io$formats$printing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.string", modulecode_pandas$io$formats$string, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.style", modulecode_pandas$io$formats$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.style_render", modulecode_pandas$io$formats$style_render, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.xml", modulecode_pandas$io$formats$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.gbq", modulecode_pandas$io$gbq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.html", modulecode_pandas$io$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json", modulecode_pandas$io$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json._json", modulecode_pandas$io$json$_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json._normalize", modulecode_pandas$io$json$_normalize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json._table_schema", modulecode_pandas$io$json$_table_schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.orc", modulecode_pandas$io$orc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parquet", modulecode_pandas$io$parquet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers", modulecode_pandas$io$parsers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.arrow_parser_wrapper", modulecode_pandas$io$parsers$arrow_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.base_parser", modulecode_pandas$io$parsers$base_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.c_parser_wrapper", modulecode_pandas$io$parsers$c_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.python_parser", modulecode_pandas$io$parsers$python_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.readers", modulecode_pandas$io$parsers$readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.pickle", modulecode_pandas$io$pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.pytables", modulecode_pandas$io$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas", modulecode_pandas$io$sas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sas7bdat", modulecode_pandas$io$sas$sas7bdat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sas_constants", modulecode_pandas$io$sas$sas_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sas_xport", modulecode_pandas$io$sas$sas_xport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sasreader", modulecode_pandas$io$sas$sasreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.spss", modulecode_pandas$io$spss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sql", modulecode_pandas$io$sql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.stata", modulecode_pandas$io$stata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.xml", modulecode_pandas$io$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting", modulecode_pandas$plotting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._core", modulecode_pandas$plotting$_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib", modulecode_pandas$plotting$_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.boxplot", modulecode_pandas$plotting$_matplotlib$boxplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.converter", modulecode_pandas$plotting$_matplotlib$converter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.core", modulecode_pandas$plotting$_matplotlib$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.groupby", modulecode_pandas$plotting$_matplotlib$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.hist", modulecode_pandas$plotting$_matplotlib$hist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.misc", modulecode_pandas$plotting$_matplotlib$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.style", modulecode_pandas$plotting$_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.timeseries", modulecode_pandas$plotting$_matplotlib$timeseries, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._matplotlib.tools", modulecode_pandas$plotting$_matplotlib$tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._misc", modulecode_pandas$plotting$_misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries", modulecode_pandas$tseries, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries.api", modulecode_pandas$tseries$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries.frequencies", modulecode_pandas$tseries$frequencies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries.offsets", modulecode_pandas$tseries$offsets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util", modulecode_pandas$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._decorators", modulecode_pandas$util$_decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._exceptions", modulecode_pandas$util$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._print_versions", modulecode_pandas$util$_print_versions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._validators", modulecode_pandas$util$_validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util.version", modulecode_pandas$util$version, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources-postLoad", modulecode_pkg_resources$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments", modulecode_pygments, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.filter", modulecode_pygments$filter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.filters", modulecode_pygments$filters, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.formatter", modulecode_pygments$formatter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.lexer", modulecode_pygments$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.lexers", modulecode_pygments$lexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.lexers._mapping", modulecode_pygments$lexers$_mapping, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.modeline", modulecode_pygments$modeline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.plugin", modulecode_pygments$plugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.regexopt", modulecode_pygments$regexopt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.style", modulecode_pygments$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles", modulecode_pygments$styles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles._mapping", modulecode_pygments$styles$_mapping, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.abap", modulecode_pygments$styles$abap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.algol", modulecode_pygments$styles$algol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.algol_nu", modulecode_pygments$styles$algol_nu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.arduino", modulecode_pygments$styles$arduino, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.autumn", modulecode_pygments$styles$autumn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.borland", modulecode_pygments$styles$borland, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.bw", modulecode_pygments$styles$bw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.colorful", modulecode_pygments$styles$colorful, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.default", modulecode_pygments$styles$default, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.dracula", modulecode_pygments$styles$dracula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.emacs", modulecode_pygments$styles$emacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.friendly", modulecode_pygments$styles$friendly, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.friendly_grayscale", modulecode_pygments$styles$friendly_grayscale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.fruity", modulecode_pygments$styles$fruity, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.gh_dark", modulecode_pygments$styles$gh_dark, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.gruvbox", modulecode_pygments$styles$gruvbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.igor", modulecode_pygments$styles$igor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.inkpot", modulecode_pygments$styles$inkpot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.lightbulb", modulecode_pygments$styles$lightbulb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.lilypond", modulecode_pygments$styles$lilypond, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.lovelace", modulecode_pygments$styles$lovelace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.manni", modulecode_pygments$styles$manni, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.material", modulecode_pygments$styles$material, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.monokai", modulecode_pygments$styles$monokai, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.murphy", modulecode_pygments$styles$murphy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.native", modulecode_pygments$styles$native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.nord", modulecode_pygments$styles$nord, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.onedark", modulecode_pygments$styles$onedark, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.paraiso_dark", modulecode_pygments$styles$paraiso_dark, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.paraiso_light", modulecode_pygments$styles$paraiso_light, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.pastie", modulecode_pygments$styles$pastie, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.perldoc", modulecode_pygments$styles$perldoc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.rainbow_dash", modulecode_pygments$styles$rainbow_dash, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.rrt", modulecode_pygments$styles$rrt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.sas", modulecode_pygments$styles$sas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.solarized", modulecode_pygments$styles$solarized, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.staroffice", modulecode_pygments$styles$staroffice, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.stata_dark", modulecode_pygments$styles$stata_dark, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.stata_light", modulecode_pygments$styles$stata_light, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.tango", modulecode_pygments$styles$tango, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.trac", modulecode_pygments$styles$trac, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.vim", modulecode_pygments$styles$vim, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.vs", modulecode_pygments$styles$vs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.xcode", modulecode_pygments$styles$xcode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.styles.zenburn", modulecode_pygments$styles$zenburn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.token", modulecode_pygments$token, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pygments.util", modulecode_pygments$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing", modulecode_pyparsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.actions", modulecode_pyparsing$actions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.common", modulecode_pyparsing$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.core", modulecode_pyparsing$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.diagram", modulecode_pyparsing$diagram, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.exceptions", modulecode_pyparsing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.helpers", modulecode_pyparsing$helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.results", modulecode_pyparsing$results, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.testing", modulecode_pyparsing$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.unicode", modulecode_pyparsing$unicode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.util", modulecode_pyparsing$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz", modulecode_pytz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.exceptions", modulecode_pytz$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.lazy", modulecode_pytz$lazy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.tzfile", modulecode_pytz$tzfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.tzinfo", modulecode_pytz$tzinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sniffio", modulecode_sniffio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sniffio._impl", modulecode_sniffio$_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sniffio._version", modulecode_sniffio$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"termios", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing_extensions", modulecode_typing_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"whichcraft", modulecode_whichcraft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml", modulecode_yaml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml._yaml", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.composer", modulecode_yaml$composer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.constructor", modulecode_yaml$constructor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.cyaml", modulecode_yaml$cyaml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.dumper", modulecode_yaml$dumper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.emitter", modulecode_yaml$emitter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.error", modulecode_yaml$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.events", modulecode_yaml$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.loader", modulecode_yaml$loader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.nodes", modulecode_yaml$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.parser", modulecode_yaml$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.reader", modulecode_yaml$reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.representer", modulecode_yaml$representer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.resolver", modulecode_yaml$resolver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.scanner", modulecode_yaml$scanner, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.serializer", modulecode_yaml$serializer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"yaml.tokens", modulecode_yaml$tokens, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope", modulecode_zope, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.event", modulecode_zope$event, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface", modulecode_zope$interface, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface._compat", modulecode_zope$interface$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface._zope_interface_coptimizations", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface.declarations", modulecode_zope$interface$declarations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface.exceptions", modulecode_zope$interface$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface.interface", modulecode_zope$interface$interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface.interfaces", modulecode_zope$interface$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zope.interface.ro", modulecode_zope$interface$ro, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__future__", NULL, 0, 4095, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_aix_support", NULL, 1, 2843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bootsubprocess", NULL, 2, 2258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_collections_abc", NULL, 3, 32889, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compat_pickle", NULL, 4, 5836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compression", NULL, 5, 4476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_markupbase", NULL, 6, 7536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_osx_support", NULL, 7, 11499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_py_abc", NULL, 8, 4647, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pydecimal", NULL, 9, 157700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyio", NULL, 10, 73618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sitebuiltins", NULL, 11, 3511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_strptime", NULL, 12, 15909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sysconfigdata__linux_x86_64-linux-gnu", NULL, 13, 39328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sysconfigdata_x86_64_conda_cos6_linux_gnu", NULL, 14, 41306, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sysconfigdata_x86_64_conda_linux_gnu", NULL, 15, 41231, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_threading_local", NULL, 16, 6503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_weakrefset", NULL, 17, 7572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"abc", NULL, 18, 6715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"argparse", NULL, 19, 63190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ast", NULL, 20, 55703, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio", NULL, 21, 699, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_events", NULL, 22, 51816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_futures", NULL, 23, 1875, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_subprocess", NULL, 24, 9350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_tasks", NULL, 25, 1945, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.constants", NULL, 26, 550, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.coroutines", NULL, 27, 6585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.events", NULL, 28, 28270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.exceptions", NULL, 29, 2432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.format_helpers", NULL, 30, 2303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.futures", NULL, 31, 11851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.locks", NULL, 32, 14137, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.log", NULL, 33, 193, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.mixins", NULL, 34, 1041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.protocols", NULL, 35, 8262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.queues", NULL, 36, 8264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.runners", NULL, 37, 2056, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.selector_events", NULL, 38, 29542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.sslproto", NULL, 39, 21918, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.staggered", NULL, 40, 4147, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.streams", NULL, 41, 20347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.subprocess", NULL, 42, 7026, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.tasks", NULL, 43, 23937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.threads", NULL, 44, 949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.transports", NULL, 45, 12296, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.trsock", NULL, 46, 7806, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.unix_events", NULL, 47, 41655, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"base64", NULL, 48, 17126, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"binhex", NULL, 49, 12834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bisect", NULL, 50, 2552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bz2", NULL, 51, 10834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"calendar", NULL, 52, 26267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgi", NULL, 53, 26687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgitb", NULL, 54, 9962, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chunk", NULL, 55, 4824, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cmd", NULL, 56, 12671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"code", NULL, 57, 9921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codecs", NULL, 58, 33183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codeop", NULL, 59, 5559, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections", NULL, 60, 48408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections.abc", NULL, 61, 202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorsys", NULL, 62, 3229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent", NULL, 63, 90, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures", NULL, 64, 1062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures._base", NULL, 65, 22197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.process", NULL, 66, 21721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.thread", NULL, 67, 5929, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"configparser", NULL, 68, 45422, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextlib", NULL, 69, 20859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextvars", NULL, 70, 210, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copy", NULL, 71, 6960, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copyreg", NULL, 72, 4647, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"csv", NULL, 73, 11762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes", NULL, 74, 15837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes._endian", NULL, 75, 1865, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.wintypes", NULL, 76, 4822, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dataclasses", NULL, 77, 26542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"datetime", NULL, 78, 56497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"decimal", NULL, 79, 326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"difflib", NULL, 80, 58869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dis", NULL, 81, 15620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email", NULL, 82, 1515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._encoded_words", NULL, 83, 5704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._header_value_parser", NULL, 84, 77759, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._parseaddr", NULL, 85, 12476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._policybase", NULL, 86, 14746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.base64mime", NULL, 87, 3204, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.charset", NULL, 88, 11539, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.contentmanager", NULL, 89, 7353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.encoders", NULL, 90, 1591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.errors", NULL, 91, 5666, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.feedparser", NULL, 92, 10542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.generator", NULL, 93, 12565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.header", NULL, 94, 16426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.headerregistry", NULL, 95, 21869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.iterators", NULL, 96, 1932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.message", NULL, 97, 37768, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.parser", NULL, 98, 5637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.policy", NULL, 99, 9617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.quoprimime", NULL, 100, 7587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.utils", NULL, 101, 9651, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings", NULL, 102, 3830, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.aliases", NULL, 103, 10885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ascii", NULL, 104, 1776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.base64_codec", NULL, 105, 2211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5", NULL, 106, 1330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5hkscs", NULL, 107, 1340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.bz2_codec", NULL, 108, 3050, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.charmap", NULL, 109, 2683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp037", NULL, 110, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1006", NULL, 111, 2390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1026", NULL, 112, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1125", NULL, 113, 9255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1140", NULL, 114, 2304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1250", NULL, 115, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1251", NULL, 116, 2338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1252", NULL, 117, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1253", NULL, 118, 2354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1254", NULL, 119, 2343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1255", NULL, 120, 2362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1256", NULL, 121, 2340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1257", NULL, 122, 2348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1258", NULL, 123, 2346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp273", NULL, 124, 2300, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp424", NULL, 125, 2344, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp437", NULL, 126, 8888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp500", NULL, 127, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp720", NULL, 128, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp737", NULL, 129, 9290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp775", NULL, 130, 8928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp850", NULL, 131, 8469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp852", NULL, 132, 8944, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp855", NULL, 133, 9257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp856", NULL, 134, 2376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp857", NULL, 135, 8368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp858", NULL, 136, 8439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp860", NULL, 137, 8859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp861", NULL, 138, 8884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp862", NULL, 139, 9117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp863", NULL, 140, 8880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp864", NULL, 141, 9027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp865", NULL, 142, 8884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp866", NULL, 143, 9297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp869", NULL, 144, 8932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp874", NULL, 145, 2442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp875", NULL, 146, 2311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp932", NULL, 147, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp949", NULL, 148, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp950", NULL, 149, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jis_2004", NULL, 150, 1346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jisx0213", NULL, 151, 1346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jp", NULL, 152, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_kr", NULL, 153, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb18030", NULL, 154, 1336, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb2312", NULL, 155, 1334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gbk", NULL, 156, 1328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hex_codec", NULL, 157, 2198, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hp_roman8", NULL, 158, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hz", NULL, 159, 1326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.idna", NULL, 160, 5563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp", NULL, 161, 1347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_1", NULL, 162, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2", NULL, 163, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2004", NULL, 164, 1357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_3", NULL, 165, 1351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_ext", NULL, 166, 1355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_kr", NULL, 167, 1347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_1", NULL, 168, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_10", NULL, 169, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_11", NULL, 170, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_13", NULL, 171, 2321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_14", NULL, 172, 2339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_15", NULL, 173, 2318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_16", NULL, 174, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_2", NULL, 175, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_3", NULL, 176, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_4", NULL, 177, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_5", NULL, 178, 2314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_6", NULL, 179, 2358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_7", NULL, 180, 2321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_8", NULL, 181, 2352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_9", NULL, 182, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.johab", NULL, 183, 1332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_r", NULL, 184, 2365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_t", NULL, 185, 2276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_u", NULL, 186, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.kz1048", NULL, 187, 2328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.latin_1", NULL, 188, 1788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_arabic", NULL, 189, 8774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_croatian", NULL, 190, 2360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_cyrillic", NULL, 191, 2350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_farsi", NULL, 192, 2294, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_greek", NULL, 193, 2334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_iceland", NULL, 194, 2353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_latin2", NULL, 195, 2494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_roman", NULL, 196, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_romanian", NULL, 197, 2361, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_turkish", NULL, 198, 2354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.palmos", NULL, 199, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ptcp154", NULL, 200, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.punycode", NULL, 201, 6269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.quopri_codec", NULL, 202, 2281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.raw_unicode_escape", NULL, 203, 1922, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.rot_13", NULL, 204, 2955, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis", NULL, 205, 1340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis_2004", NULL, 206, 1350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jisx0213", NULL, 207, 1350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.tis_620", NULL, 208, 2403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.undefined", NULL, 209, 1979, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.unicode_escape", NULL, 210, 1902, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16", NULL, 211, 4808, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_be", NULL, 212, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_le", NULL, 213, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32", NULL, 214, 4701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_be", NULL, 215, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_le", NULL, 216, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_7", NULL, 217, 1502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8", NULL, 218, 1561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8_sig", NULL, 219, 4358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.uu_codec", NULL, 220, 3150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.zlib_codec", NULL, 221, 2811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"enum", NULL, 222, 26027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"filecmp", NULL, 223, 8713, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fileinput", NULL, 224, 14036, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fnmatch", NULL, 225, 4208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fractions", NULL, 226, 18564, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ftplib", NULL, 227, 28941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"functools", NULL, 228, 28299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"genericpath", NULL, 229, 3871, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getopt", NULL, 230, 6303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getpass", NULL, 231, 4174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gettext", NULL, 232, 18074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"glob", NULL, 233, 5816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"graphlib", NULL, 234, 7580, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gzip", NULL, 235, 18510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hashlib", NULL, 236, 6809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"heapq", NULL, 237, 13829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hmac", NULL, 238, 6937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html", NULL, 239, 3278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.entities", NULL, 240, 144394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.parser", NULL, 241, 10728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http", NULL, 242, 6371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.client", NULL, 243, 35142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.cookiejar", NULL, 244, 53404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.cookies", NULL, 245, 15302, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.server", NULL, 246, 35156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imaplib", NULL, 247, 42276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imghdr", NULL, 248, 3869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imp", NULL, 249, 9750, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib", NULL, 250, 3760, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._abc", NULL, 251, 1935, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._adapters", NULL, 252, 3667, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap", NULL, 253, 30092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap_external", NULL, 254, 44277, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._common", NULL, 255, 2931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.abc", NULL, 256, 15855, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.machinery", NULL, 257, 908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata", NULL, 258, 37051, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._adapters", NULL, 259, 2308, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._collections", NULL, 260, 1483, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._functools", NULL, 261, 3073, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._itertools", NULL, 262, 535, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._meta", NULL, 263, 2228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._text", NULL, 264, 3024, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.readers", NULL, 265, 5146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources", NULL, 266, 5333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.util", NULL, 267, 9293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"inspect", NULL, 268, 85117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"io", NULL, 269, 3627, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ipaddress", NULL, 270, 61415, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json", NULL, 271, 12219, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.decoder", NULL, 272, 9730, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.encoder", NULL, 273, 11081, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.scanner", NULL, 274, 1880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"keyword", NULL, 275, 891, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"linecache", NULL, 276, 4106, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"locale", NULL, 277, 46129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging", NULL, 278, 66846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lzma", NULL, 279, 12064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mailcap", NULL, 280, 7284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mimetypes", NULL, 281, 17583, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"modulefinder", NULL, 282, 16130, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing", NULL, 283, 624, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.connection", NULL, 284, 25538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.context", NULL, 285, 12818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy", NULL, 286, 3823, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy.connection", NULL, 287, 2532, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.forkserver", NULL, 288, 8390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.heap", NULL, 289, 7632, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.managers", NULL, 290, 40726, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.pool", NULL, 291, 25166, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.popen_fork", NULL, 292, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.popen_forkserver", NULL, 293, 2430, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.popen_spawn_posix", NULL, 294, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.process", NULL, 295, 11226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.queues", NULL, 296, 10249, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.reduction", NULL, 297, 8261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_sharer", NULL, 298, 5265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_tracker", NULL, 299, 5486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.shared_memory", NULL, 300, 14448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.sharedctypes", NULL, 301, 7064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.spawn", NULL, 302, 6701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.synchronize", NULL, 303, 11291, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.util", NULL, 304, 11461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"netrc", NULL, 305, 3897, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ntpath", NULL, 306, 15267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"nturl2path", NULL, 307, 1711, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numbers", NULL, 308, 11830, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.testing", NULL, 309, 2811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"opcode", NULL, 310, 5411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"operator", NULL, 311, 13472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"os", NULL, 312, 31563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pathlib", NULL, 313, 42016, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickle", NULL, 314, 46846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickletools", NULL, 315, 67724, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pipes", NULL, 316, 7733, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources", NULL, 317, 100874, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor", NULL, 318, 101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 319, 556, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 320, 7273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 321, 5574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 322, 3569, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 323, 810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 324, 4156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 325, 6751, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 326, 5404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 327, 108, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 328, 8436, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 329, 17128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 330, 19577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 331, 257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 332, 125507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 333, 26715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 334, 446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._elffile", NULL, 335, 3242, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 336, 5668, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 337, 3128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._parser", NULL, 338, 8695, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 339, 2632, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._tokenizer", NULL, 340, 5752, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 341, 6826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 342, 2794, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 343, 30189, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 344, 13067, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 345, 3601, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 346, 13921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs", NULL, 347, 10396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.android", NULL, 348, 4253, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.api", NULL, 349, 5129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.unix", NULL, 350, 6819, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.version", NULL, 351, 217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources.extern", NULL, 352, 2848, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkgutil", NULL, 353, 18325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"platform", NULL, 354, 27270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"poplib", NULL, 355, 13537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"posixpath", NULL, 356, 10494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pprint", NULL, 357, 17839, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pstats", NULL, 358, 23585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"py_compile", NULL, 359, 7281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyclbr", NULL, 360, 9739, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pydoc", NULL, 361, 84773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"queue", NULL, 362, 10756, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"quopri", NULL, 363, 5758, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"random", NULL, 364, 22712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re", NULL, 365, 14191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"reprlib", NULL, 366, 5214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich", NULL, 367, 5985, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._cell_widths", NULL, 368, 7719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._emoji_codes", NULL, 369, 359959, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._emoji_replace", NULL, 370, 1099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._export_format", NULL, 371, 2230, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._extension", NULL, 372, 376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._fileno", NULL, 373, 693, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._inspect", NULL, 374, 8577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._log_render", NULL, 375, 2533, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._loop", NULL, 376, 1197, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._null_file", NULL, 377, 3144, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._palettes", NULL, 378, 5002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._pick", NULL, 379, 545, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._ratio", NULL, 380, 5050, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._spinners", NULL, 381, 12176, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._win32_console", NULL, 382, 18876, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._windows", NULL, 383, 1670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._windows_renderer", NULL, 384, 1924, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich._wrap", NULL, 385, 2378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.abc", NULL, 386, 1207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.align", NULL, 387, 7799, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.ansi", NULL, 388, 5885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.box", NULL, 389, 8260, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.cells", NULL, 390, 4386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.color", NULL, 391, 17625, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.color_triplet", NULL, 392, 1342, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.columns", NULL, 393, 6102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.console", NULL, 394, 82531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.constrain", NULL, 395, 1659, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.containers", NULL, 396, 6396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.control", NULL, 397, 8040, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.default_styles", NULL, 398, 6112, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.emoji", NULL, 399, 3136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.errors", NULL, 400, 1432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.file_proxy", NULL, 401, 2305, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.filesize", NULL, 402, 2522, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.highlighter", NULL, 403, 7965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.json", NULL, 404, 4624, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.jupyter", NULL, 405, 3892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.live", NULL, 406, 11254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.live_render", NULL, 407, 3295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.markup", NULL, 408, 6037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.measure", NULL, 409, 4981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.padding", NULL, 410, 4375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.pager", NULL, 411, 1381, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.palette", NULL, 412, 3541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.panel", NULL, 413, 7399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.pretty", NULL, 414, 26838, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.progress", NULL, 415, 53919, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.progress_bar", NULL, 416, 6816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.protocol", NULL, 417, 1245, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.region", NULL, 418, 432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.repr", NULL, 419, 3989, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.rule", NULL, 420, 3836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.scope", NULL, 421, 2882, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.screen", NULL, 422, 1772, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.segment", NULL, 423, 20652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.spinner", NULL, 424, 4305, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.status", NULL, 425, 4498, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.style", NULL, 426, 21235, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.styled", NULL, 427, 1644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.syntax", NULL, 428, 25798, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.table", NULL, 429, 29811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.terminal_theme", NULL, 430, 2921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.text", NULL, 431, 41520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.theme", NULL, 432, 4743, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.themes", NULL, 433, 198, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rich.traceback", NULL, 434, 21566, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rlcompleter", NULL, 435, 5918, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"runpy", NULL, 436, 9375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sched", NULL, 437, 6079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"secrets", NULL, 438, 2139, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"selectors", NULL, 439, 17069, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shlex", NULL, 440, 7746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shutil", NULL, 441, 38500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"signal", NULL, 442, 2899, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sndhdr", NULL, 443, 6926, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socket", NULL, 444, 28927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socketserver", NULL, 445, 25311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlite3", NULL, 446, 1601, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlite3.dbapi2", NULL, 447, 2938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_compile", NULL, 448, 15158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_constants", NULL, 449, 6321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_parse", NULL, 450, 21719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ssl", NULL, 451, 45245, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stat", NULL, 452, 4237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"statistics", NULL, 453, 37015, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"string", NULL, 454, 7066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stringprep", NULL, 455, 17039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"struct", NULL, 456, 271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"subprocess", NULL, 457, 44705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"symtable", NULL, 458, 12799, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sysconfig", NULL, 459, 17477, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tarfile", NULL, 460, 70317, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tempfile", NULL, 461, 24028, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"textwrap", NULL, 462, 13776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"threading", NULL, 463, 44933, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"timeit", NULL, 464, 11733, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"token", NULL, 465, 2702, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tokenize", NULL, 466, 17158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"trace", NULL, 467, 19834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"traceback", NULL, 468, 21676, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tracemalloc", NULL, 469, 17489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tty", NULL, 470, 1043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"types", NULL, 471, 9489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing", NULL, 472, 85241, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib", NULL, 473, 86, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.error", NULL, 474, 2817, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.parse", NULL, 475, 34060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.request", NULL, 476, 71302, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.response", NULL, 477, 3431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"uu", NULL, 478, 3831, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"uuid", NULL, 479, 22462, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"warnings", NULL, 480, 13610, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"weakref", NULL, 481, 20307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"webbrowser", NULL, 482, 16964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"wsgiref", NULL, 483, 682, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"wsgiref.handlers", NULL, 484, 16362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"wsgiref.headers", NULL, 485, 7679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"wsgiref.simple_server", NULL, 486, 5270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"wsgiref.util", NULL, 487, 5371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xdrlib", NULL, 488, 7844, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml", NULL, 489, 648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom", NULL, 490, 5232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.NodeFilter", NULL, 491, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.domreg", NULL, 492, 2823, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.expatbuilder", NULL, 493, 27273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.minicompat", NULL, 494, 2654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.minidom", NULL, 495, 55293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.pulldom", NULL, 496, 10518, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.xmlbuilder", NULL, 497, 12265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree", NULL, 498, 89, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.ElementPath", NULL, 499, 8996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.ElementTree", NULL, 500, 55843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers", NULL, 501, 263, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers.expat", NULL, 502, 301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax", NULL, 503, 3160, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax._exceptions", NULL, 504, 5338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.expatreader", NULL, 505, 12465, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.handler", NULL, 506, 14508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.saxutils", NULL, 507, 12610, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.xmlreader", NULL, 508, 16351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc", NULL, 509, 86, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc.client", NULL, 510, 34352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipfile", NULL, 511, 60999, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 3, 32889},
    {"abc", 18, 6715},
    {"ast", 20, 55703},
    {"codecs", 58, 33183},
    {"collections", 60, -48408},
    {"collections.abc", 61, 202},
    {"contextlib", 69, 20859},
    {"copyreg", 72, 4647},
    {"dis", 81, 15620},
    {"encodings", 102, -3830},
    {"encodings.aliases", 103, 10885},
    {"encodings.ascii", 104, 1776},
    {"encodings.big5", 106, 1330},
    {"encodings.big5hkscs", 107, 1340},
    {"encodings.charmap", 109, 2683},
    {"encodings.cp037", 110, 2314},
    {"encodings.cp1006", 111, 2390},
    {"encodings.cp1026", 112, 2318},
    {"encodings.cp1125", 113, 9255},
    {"encodings.cp1140", 114, 2304},
    {"encodings.cp1250", 115, 2341},
    {"encodings.cp1251", 116, 2338},
    {"encodings.cp1252", 117, 2341},
    {"encodings.cp1253", 118, 2354},
    {"encodings.cp1254", 119, 2343},
    {"encodings.cp1255", 120, 2362},
    {"encodings.cp1256", 121, 2340},
    {"encodings.cp1257", 122, 2348},
    {"encodings.cp1258", 123, 2346},
    {"encodings.cp273", 124, 2300},
    {"encodings.cp424", 125, 2344},
    {"encodings.cp437", 126, 8888},
    {"encodings.cp500", 127, 2314},
    {"encodings.cp720", 128, 2411},
    {"encodings.cp737", 129, 9290},
    {"encodings.cp775", 130, 8928},
    {"encodings.cp850", 131, 8469},
    {"encodings.cp852", 132, 8944},
    {"encodings.cp855", 133, 9257},
    {"encodings.cp856", 134, 2376},
    {"encodings.cp857", 135, 8368},
    {"encodings.cp858", 136, 8439},
    {"encodings.cp860", 137, 8859},
    {"encodings.cp861", 138, 8884},
    {"encodings.cp862", 139, 9117},
    {"encodings.cp863", 140, 8880},
    {"encodings.cp864", 141, 9027},
    {"encodings.cp865", 142, 8884},
    {"encodings.cp866", 143, 9297},
    {"encodings.cp869", 144, 8932},
    {"encodings.cp874", 145, 2442},
    {"encodings.cp875", 146, 2311},
    {"encodings.cp932", 147, 1332},
    {"encodings.cp949", 148, 1332},
    {"encodings.cp950", 149, 1332},
    {"encodings.euc_jis_2004", 150, 1346},
    {"encodings.euc_jisx0213", 151, 1346},
    {"encodings.euc_jp", 152, 1334},
    {"encodings.euc_kr", 153, 1334},
    {"encodings.gb18030", 154, 1336},
    {"encodings.gb2312", 155, 1334},
    {"encodings.gbk", 156, 1328},
    {"encodings.hp_roman8", 158, 2515},
    {"encodings.hz", 159, 1326},
    {"encodings.iso2022_jp", 161, 1347},
    {"encodings.iso2022_jp_1", 162, 1351},
    {"encodings.iso2022_jp_2", 163, 1351},
    {"encodings.iso2022_jp_2004", 164, 1357},
    {"encodings.iso2022_jp_3", 165, 1351},
    {"encodings.iso2022_jp_ext", 166, 1355},
    {"encodings.iso2022_kr", 167, 1347},
    {"encodings.iso8859_1", 168, 2313},
    {"encodings.iso8859_10", 169, 2318},
    {"encodings.iso8859_11", 170, 2412},
    {"encodings.iso8859_13", 171, 2321},
    {"encodings.iso8859_14", 172, 2339},
    {"encodings.iso8859_15", 173, 2318},
    {"encodings.iso8859_16", 174, 2320},
    {"encodings.iso8859_2", 175, 2313},
    {"encodings.iso8859_3", 176, 2320},
    {"encodings.iso8859_4", 177, 2313},
    {"encodings.iso8859_5", 178, 2314},
    {"encodings.iso8859_6", 179, 2358},
    {"encodings.iso8859_7", 180, 2321},
    {"encodings.iso8859_8", 181, 2352},
    {"encodings.iso8859_9", 182, 2313},
    {"encodings.johab", 183, 1332},
    {"encodings.koi8_r", 184, 2365},
    {"encodings.koi8_t", 185, 2276},
    {"encodings.koi8_u", 186, 2351},
    {"encodings.kz1048", 187, 2328},
    {"encodings.latin_1", 188, 1788},
    {"encodings.mac_arabic", 189, 8774},
    {"encodings.mac_croatian", 190, 2360},
    {"encodings.mac_cyrillic", 191, 2350},
    {"encodings.mac_farsi", 192, 2294},
    {"encodings.mac_greek", 193, 2334},
    {"encodings.mac_iceland", 194, 2353},
    {"encodings.mac_latin2", 195, 2494},
    {"encodings.mac_roman", 196, 2351},
    {"encodings.mac_romanian", 197, 2361},
    {"encodings.mac_turkish", 198, 2354},
    {"encodings.palmos", 199, 2341},
    {"encodings.ptcp154", 200, 2435},
    {"encodings.punycode", 201, 6269},
    {"encodings.quopri_codec", 202, 2281},
    {"encodings.raw_unicode_escape", 203, 1922},
    {"encodings.shift_jis", 205, 1340},
    {"encodings.shift_jis_2004", 206, 1350},
    {"encodings.shift_jisx0213", 207, 1350},
    {"encodings.tis_620", 208, 2403},
    {"encodings.undefined", 209, 1979},
    {"encodings.unicode_escape", 210, 1902},
    {"encodings.utf_16", 211, 4808},
    {"encodings.utf_16_be", 212, 1581},
    {"encodings.utf_16_le", 213, 1581},
    {"encodings.utf_32", 214, 4701},
    {"encodings.utf_32_be", 215, 1474},
    {"encodings.utf_32_le", 216, 1474},
    {"encodings.utf_7", 217, 1502},
    {"encodings.utf_8", 218, 1561},
    {"encodings.utf_8_sig", 219, 4358},
    {"encodings.uu_codec", 220, 3150},
    {"encodings.zlib_codec", 221, 2811},
    {"enum", 222, 26027},
    {"functools", 228, 28299},
    {"genericpath", 229, 3871},
    {"importlib", 250, -3760},
    {"importlib._bootstrap", 253, 30092},
    {"importlib._bootstrap_external", 254, 44277},
    {"importlib.machinery", 257, 908},
    {"inspect", 268, 85117},
    {"io", 269, 3627},
    {"keyword", 275, 891},
    {"linecache", 276, 4106},
    {"locale", 277, 46129},
    {"opcode", 310, 5411},
    {"operator", 311, 13472},
    {"os", 312, 31563},
    {"posixpath", 356, 10494},
    {"quopri", 363, 5758},
    {"re", 365, 14191},
    {"reprlib", 366, 5214},
    {"sre_compile", 448, 15158},
    {"sre_constants", 449, 6321},
    {"sre_parse", 450, 21719},
    {"stat", 452, 4237},
    {"token", 465, 2702},
    {"tokenize", 466, 17158},
    {"types", 471, 9489},
    {"warnings", 480, 13610},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

