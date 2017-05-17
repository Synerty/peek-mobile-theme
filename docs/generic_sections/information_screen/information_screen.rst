.. _information_section:

===================
Information Section
===================

The Information Section shows useful plugin related descriptions, information and / or
instructions.  This can include data from other plugins.

Ideally the Information Section is used as the landing page before presenting the plugin
screens. It could be used throughout a plugin if required.

.. image:: ./information_screen.web.jpg
   :align: center

The Information Section should provide the Peek App user any relevant information
needed to use a plugin.

Uses:

*  Initial landing page

*  Sub section landing page (instructions for part of a plugin that may function
   differently)

Any plugin Screen will be able to use the :code:`.peek-information-section` attributes.


Classes
-------

The :code:`.peek-information-section` class contain the classes specific to a Information
Section.

::

        .peek-information-section{
        /*
            Contains the Information Section classes
        */
            ...

            information-section-icon{
            /*
                Contains the icon attributes unique to the Details Section
            */
                ...

            }


SCSS Files
----------

The Information style classes are found in the :file:`_information_section.scss`.

The Information Section HTML layout classes are found in the
:file:`_information_section.web.scss`.

The Information Section NativeScript layout classes are found in the
:file:`_information_section.ns.scss`.


HTML
----

::

        <div class="peek-information-section">
            <img class="information-section-icon" src="../images/field_switching.png">
            <div class="title">Welcome to Field Switching.</div>
            <div class="p">
                Peek Field Switching allows field engineers working on the electricity
                network to electronically
                <ul>
                    <li>View switching instructions</li>
                    <li>Receive instructions from the control room</li>
                    <li>And field confirm field switching operations</li>
                </ul>
            </div>
            <button class="btn" ng-reflect-router-link="./joblist">My Jobs &gt;
            </button>
            <i class="information-section-icon fa fa-user" aria-hidden="true"></i>
            <div class="title">Logged in as Tim Hamilton</div>
        </div>
