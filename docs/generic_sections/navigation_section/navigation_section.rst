.. _navigation_section:

==================
Navigation Section
==================

Navigation Section is dynamic and exists if required by the plugin.  The contents of the
Navigation Section is constructed from the plugin.

The Navigation Section is located below the :ref:`title_section`, above the screen.

.. image:: ./navigation_section.web.jpg
   :align: center

The buttons remain a fixed size throughout a responsive lifecycle.  The buttons are
sized around the text they contain.

.. note:: The buttons require a different theme to the :ref:`title_bar`.


Looks Classes
-------------

The Navigation Section looks classes are found in the :file:`_navigation_section.scss`.


Navigation Section :code:`.peek-nav-section`
````````````````````````````````````````````

The :code:`.peek-nav-section` class contains the looks classes specific to the
Navigation Section.

::

        .peek-nav-section{
        /* Contains the Navigation Section looks attributes */
            ...

            }
           .btn-group{
           /* Contains the Button Group looks attributes unique to the Navigation Section */
               ...

           }
           .btn{
           /* Contains the Button looks attributes unique to the Navigation Section */
               ...

           }
        }


HTML
~~~~

::

        <div class="peek-nav-section">
           <div class="btn-group pull-left" role="group">
               <button class="btn" role="group">My Jobs
               </button>
               <button class="btn" role="group">Job
               </button>
               <button class="btn" role="group">Operations
               </button>
           </div>
           <div class="btn-group pull-right" role="group">
               <button class="btn" role="group">&lt;</button>
               <button class="btn" role="group">&gt;</button>
            </div>
        </div>


NativeScript
~~~~~~~~~~~~

::

        <GridLayout class="peek-nav-section"
            ...

        </GridLayout>


Layout
------


HTML
````

The Navigation Section HTML layout classes are found in the
:file:`_navigation_section.web.scss`.


NativeScript
````````````

The Navigation Section NativeScript layout classes are found in the
:file:`_navigation_section.ns.scss`.
