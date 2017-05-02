.. _details_section:

===============
Details Section
===============

Any plugin Screen will be able to use the :code:`.peek-details-section` attributes.


Looks Classes
-------------

The Details looks classes are found in the :file:`_details_section.scss`.


.. _details_section_details_section:

Details Section :code:`.peek-details-section`
`````````````````````````````````````````````

.. image:: ./details_section.web.jpg
  :align: center

The :code:`.peek-details-section` class contain the classes specific to a Details
Section.

::

        .peek-details-section{
        /* Contains the Details Section looks classes */
            ...

            .row{
            /* Contains the row looks attributes unique to the Details Section */
                ...

            .title{
            /* Contains the title looks attributes unique to the Details Section */
                ...

            }
            .value{
            /* Contains the value looks attributes unique to the Details Section */
                ...

            }
            }
        }


Layout
------


HTML
````

The Details Section HTML layout classes are found in the
:file:`_details_section.web.scss`.


NativeScript
````````````

The Details Section NativeScript layout classes are found in the
:file:`_details_section.ns.scss`.


Code Extract
------------

Below is the HTML code extract of the first two rows from the
:ref:`details_section_details_section`: ::

        <div class="peek-details-section">
            <div class="row">
                <div class="form-group col-xs-5">
                    <div class="title">
                        Item

                    </div>
                    <div class="value">
                        #3

                    </div>
                </div>
                <div class="form-group col-xs-7">
                    <div class="title">
                        State

                    </div>
                    <div class="value">
                        Confirmed

                    </div>
                </div>
            </div>
            <div class="row">
                <div class="form-group col-xs-12">
                    <div class="title">Location</div>
                    <div class="value">
                        Weedons ZS - R15/174

                    </div>
                </div>
            </div>
        </div>
