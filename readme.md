![CryHTML5 - chromium for CryEngine 3](http://i.imgur.com/PfZKmtQ.png)
=====================================
**Chromium** is an open-source browser project that uses WebKit, an open source page renderer, to lay out and render web pages and dynamic graphics at lightning speed. ([see](http://www.chromium.org/developers/design-documents/displaying-a-web-page-in-chrome)).

**CryEngine** is a game engine designed by the German game developer Crytek. It was used to create the Crysis series, frequently referred to for its incredible graphic fidelity and often used as a graphical benchmark for gaming systems. ([see](http://www.crytek.com/cryengine)].

**CryHTML5** is a bridge between the [Chromium Embedded Framework](https://code.google.com/p/chromiumembedded/) and the CryEngine renderer, which allows developers to rapidly build UI for their games using the highly prevalent HTML5 format. Furthermore, developers can use JavaScript and the numerous open source JavaScript libraries available to browser based apps in the game engine.

Installation / Integration
==========================
Clone (or add as a submodule) this repository to the `Code` directory. This plugin depends on `Plugin_D3D` and `Plugin_SDK` which should be checked out and compiled in the same way.

The plugin manager will automatically load up the plugin (from Bin32/Plugins) when the game/editor is restarted or if you directly load it.

CVars / Commands
================
None yet.

Flownodes
=========
None yet, although a FlowNode control interface is planned.
