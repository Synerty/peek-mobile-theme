.. _details_screen:

==============
Details Screen
==============

Any plugin screen will be able to use the :code:`.peek-details-screen` attributes.


Looks Classes
-------------

The Details looks classes are found in the :file:`_details_screen.scss`.


Details Screen :code:`.peek-details-screen`
```````````````````````````````````````````

The :code:`.peek-details-screen` class contain the classes specific to a Details
Screen.


Rows :code:`.data-row`
``````````````````````

The :code:`.data-row` class will contain:

*  :code:`row`


Titles :code:`.data-title`
``````````````````````````

The :code:`.data-title` class will contain:

*  :code:`h5`

*  :code:`text-muted`


Values :code:`.data-value`
``````````````````````````

The :code:`.data-value` class will contain:

*  :code:`h3`


HTML Layout
-----------

The Details Screen HTML layout classes are found in the
:file:`_details_screen.web.scss`.


Display Samples
---------------

Below is the HTML code extract of the first two rows from the
:ref:`details_screen_details_screen_example`: ::

        <div class="data-row">
            <div class="form-group col-xs-5">
                <div class="data-title">Item</div>
                <div class="data-value">#3</div>
            </div>
            <div class="form-group col-xs-7">
                <div class="data-title">State</div>
                <div class="data-value">Confirmed</div>
            </div>
        </div>

        <div class="data-row">
            <div class="form-group col-xs-12">
                <div class="data-title">Location</div>
                <div class="data-value">Weedons ZS - R15/174</div>
            </div>
        </div>


.. _details_screen_details_screen_example:

Details Screen Example
----------------------

.. image:: ./details_screen.web.jpg
