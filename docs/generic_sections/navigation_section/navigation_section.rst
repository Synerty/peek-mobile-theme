.. _navigation_section:

==================
Navigation Section
==================

The Navigation Section is positioned below the :ref:`title_bar`, above the plugin
screen and contains buttons that route to other screens or toggle the data presented.

The sample below shows an example of breadcrumbs navigation (left) and forward / next and
back / previous buttons (right).

.. image:: ./navigation_section.web.jpg
   :align: center

The Navigation Section serves as primary navigation routes for the active plugin.

If a Navigation Section is required it is constructed by the plugin screen.

Navigation Types:

*  Breadcrumbs
*  Pagination
*  forward and / or back, next and / or previous

The buttons remain a fixed size throughout a responsive lifecycle.  The buttons are
sized around the text they contain.

.. note:: The buttons require a different theme to the :ref:`title_bar` and generic
   peek theme buttons.


Classes
-------

The :code:`.peek-nav-section` class contains the looks classes specific to the
Navigation Section.

::

        .peek-nav-section{
        /* Contains the Navigation Section attributes */
            ...

           .nav-section-btn{
           /* Contains the Button attributes unique to the Navigation Section */
               ...

           }
        }


SCSS Files
----------

The Navigation Section style classes are found in the
:file:`_navigation_section.scss`.

The Navigation Section HTML layout classes are found in the
:file:`_navigation_section.web.scss`.

The Navigation Section NativeScript layout classes are found in the
:file:`_navigation_section.ns.scss`.


HTML
----

The :code:`peek-nav-section` is to be included before the code of the plugin screen
requiring the Nav Bar.

::

        <div class="peek-nav-section">
            <!--
                The following 'div' groups button to the left of the Nav Bar.
                Can contain one to many buttons
            -->
            <div class="btn-group pull-left" role="group">
               <button class="nav-section-btn" role="group">My Jobs
               </button>
               <button class="nav-section-btn" role="group">Job
               </button>
               <button class="nav-section-btn" role="group">Operations
               </button>
            </div>

            <!--
                The following 'div' groups button to the right of the Nav Bar.
                Can contain one to many buttons
            -->
            <div class="btn-group pull-right" role="group">
               <button class="nav-section-btn" role="group">&lt;</button>
               <button class="nav-section-btn" role="group">&gt;</button>
            </div>
        </div>
