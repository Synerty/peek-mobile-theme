
.. image:: ./peek_ios_display_field-switching.png
  :align: center

The main aim of the Peek application is to display and transmit data.


What is Peek
------------

Peek is a semi distributed pluggable python platform.

Plugins are installed across the peek services and communicate with other plugins to
retrieve, transmit, store or display data.

Peek provides a platform for Python similar to the functionality JBOSS provides for JAVA.
(Or at least that is in the intention, it's early days)


The Big Bang
````````````

Peek was created and is maintained by `Synerty <https://www.synerty.com>`_ to be a
distributed, pluggable python platform that provides many of the core services needed
for enterprise applications.

We wanted to integrate smaller pieces of code, that can leverage different existing
boilerplate code which the platform provides. For example, services for parallel
processing or services for business integrations.

The Peek Platform allows developers to better write and integrate smaller units of code.

`Synerty <https://www.synerty.com>`_ uses the Peek platform to provide scalable
enterprise grade applications to the power utilities sector.


.. _overview_bootstrap:

Bootstrap
---------

The scss for the peek app is based upon bootstrap.  For more detail to
bootstrap documentation please visit `BootStrap <http://getbootstrap.com>`_.

The bootstrap classes that are related to the layouts will only work on HTML, not
NativeScript.  Therefore the theme will avoid selecting by bootstrap classes that are
related to layouts.

The looks and feel classes are to be used.  These will need to be styled from scratch
for NativeScript.

The scss will be structured in such a way to ignore hierarchy and tag selection.


.. note:: NativeScript does not use :ref:`overview_bootstrap` for layout.

.. _overview_nativescript:

NativeScript User Interface
---------------------------

`The user interface <https://docs.nativescript.org/ui/basics>`_ of NativeScript mobile
apps consists of pages. Typically, the design of the user interface is developed and
stored in XML files, styling is done via CSS and the business logic is developed and
stored in JavaScript or TypeScript files.
