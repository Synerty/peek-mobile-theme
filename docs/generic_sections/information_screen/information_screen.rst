.. _information_section:

===================
Information Section
===================

Any plugin Screen will be able to use the :code:`.peek-information-section` attributes.


Looks Classes
-------------

The Details looks classes are found in the :file:`_information_section.scss`.


.. _information_section_details_section:

Details Section :code:`.peek-details-section`
`````````````````````````````````````````````

The :code:`.peek-information-section` class contain the classes specific to a Information
Section.

::

        .peek-information-section{
        /* Contains the Information Section looks classes */
            ...

            image{
            /* Contains the image looks attributes unique to the Details Section */
                ...

            }
            title{
            /* Contains the title looks attributes unique to the Details Section */
                ...

            }
            description{
            /* Contains the description looks attributes unique to the Details Section */
                ...

            }
            btn{
            /* Contains the button looks attributes unique to the Details Section */
                ...

            }
            icon{
            /* Contains the icon looks attributes unique to the Details Section */
                ...

            }
            user-status{
            /* Contains the user status text looks attributes unique to the Details
            Section */
                ...

            }


HTML
~~~~

::

        <div class="peek-information-section">
            <img class="image" src="../images/field_switching.png">
            <div class="title">Welcome to Field Switching.</div>
            <div class="description">
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
            <i class="icon fa fa-user" aria-hidden="true"></i>
            <div class="user-status">Logged in as Tim Hamilton</div>
        </div>


Layout
------


HTML
````

The Information Section HTML layout classes are found in the
:file:`_information_section.web.scss`.


NativeScript
````````````

The Information Section NativeScript layout classes are found in the
:file:`_information_section.ns.scss`.
