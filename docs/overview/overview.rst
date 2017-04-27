.. _overview:

========
Overview
========

The Peek Mobile Theme will style the Peek app built upon :ref:`overview_bootstrap`.


Design Objective
----------------

The objective of this project is to stylise the existing layout to make it very
impressive without changing the HTML / javascript of a page to a large extent. The job
mainly involves CSS/SCSS upgrade to the base Bootstrap theme.

The bootstrap classes that are related to the layouts will only work on HTML, not
NativeScript.  Therefore the theme will avoid selecting by bootstrap classes that are
related to layouts.

The looks and feel classes are to be used.  These will need to be styled from scratch
for NativeScript.

The scss will be structured in such a way to ignore hierarchy and tag selection.

.. image:: ./peek_app.web.jpg
  :align: center


.. _overview_bootstrap:

Bootstrap
---------

The css for the peek app is based upon bootstrap. For more detailed reference to
bootstrap documentation please visit `BootStrap <http://getbootstrap.com>`_.

.. note:: NativeScript does not use :ref:`overview_bootstrap` for layout.

.. _overview_nativescript:

NativeScript User Interface
---------------------------

`The user interface <https://docs.nativescript.org/ui/basics>`_ of NativeScript mobile
apps consists of pages. Typically, the design of the user interface is developed and
stored in XML files, styling is done via CSS and the business logic is developed and
stored in JavaScript or TypeScript files.
