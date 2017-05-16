.. _details_section:

===============
Details Section
===============

The Details Section presents data (text, numbers, images, or other data) of importance
to the Peek app user.
It involves enumerating important characteristics, emphasizing significant figures and
identifying important features of data.

.. image:: ./details_section.web.jpg
  :align: center

Ideally this section will be configured to present only required data to the user
reducing the need for the Peek app user scrolling / filtering through unnecessary data.
Prioritises information by providing focus to the values.

Uses:

*  Instructions

*  Itinerary

*  Form Data (displaying not editing)

Any plugin Screen will be able to use the :code:`.peek-details-section` attributes.


Classes
-------

The :code:`.peek-details-section` class contain the classes specific to a Details
Section.

::

        .peek-details-section{
        /* Contains the Details Section looks classes */
            ...

            .details-section-title{
            /*
                Contains the title attributes unique to the Details Section
                this text will have the text-muted effect
            */
                ...

            }
            .details-section-value{
            /*
                Contains the value attributes unique to the Details Section
                text to have the focus of attention
            */
                ...

            }
        }


SCSS Files
----------

The Details style classes are found in the
:file:`_details_section.scss`.

The Details Section HTML layout classes are found in the
:file:`_details_section.web.scss`.

The Details Section NativeScript layout classes are found in the
:file:`_details_section.ns.scss`.


HTML
----

The Details Section uses Bootstraps `Grid System <http://getbootstrap.com/css/#grid>`_.

A Container contains row's.  Row create horizontal groups of columns, rows are made up of
12 columns.  Content is placed in columns and only column's can be immediate children of
row's.

Refer to the `Grid System <http://getbootstrap.com/css/#grid>`_ for more information
about creating page layouts using the Bootstrap grid system.

Below is the HTML code extract of the first two rows from the screenshot in the
beginning of the :ref:`details_section`: ::

        <div class="peek-details-section">
            <div class="container-fluid">

                <div class="row">
                <!-- This div contains the row contents -->
                    <div class="col-xs-5">
                    <!--
                        This div contains the cell contents.  Rows are made up of 12
                        parts.
                     -->
                        <div class="details-section-title">Item</div>
                        <div class="details-section-value">#3</div>
                    </div>
                    <div class="col-xs-7">
                    <!--
                        This div contains the cell contents.  Rows are made up of 12
                        parts.
                     -->
                        <div class="details-section-title">State</div>
                        <div class="details-section-value">Confirmed</div>
                    </div>
                </div>

                <div class="row">
                <!-- This div contains the row contents -->
                    <div class="col-xs-12">
                    <!--
                        This div contains the cell contents.  Rows are made up of 12
                        parts.
                     -->
                        <div class="details-section-title">Location</div>
                        <div class="details-section-value">Weedons ZS - R15/174</div>
                    </div>
                </div>

            </div>
        </div>
