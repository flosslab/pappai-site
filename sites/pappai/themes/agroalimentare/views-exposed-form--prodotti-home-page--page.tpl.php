<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
    <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
    ?>
<?php endif; ?>
<div class="views-exposed-form">
    <div class="views-exposed-widgets clearfix">
        <div class="row">
            <div class="views-widget col-md-12">
                <div class="description">
                    <h5><?php
                        //print $widgets["filter-title"]->label; ?></h5>
                </div>
                <?php $label_to_print = $widgets["filter-combine"]->widget;
                        $label_to_print = str_replace(' type="text" ', ' type="text" placeholder="'.$widgets["filter-combine"]->label.'" ',$label_to_print);
                        $widgets["filter-combine"]->widget=$label_to_print;
                        print $widgets["filter-combine"]->widget;
                ?>
            </div>
            <!--<div class="views-widget col-md-2 hidden-xs hidden-sm">
                <?php //if (!empty($reset_button)): ?>
                    <div class=" views-reset-button">
                        <?php //print $reset_button; ?>
                    </div>
                <?php //endif; ?>
            </div>-->
        </div>
        <div class="row">
            <div class="views-widget col-md-4">
                <div class="description">
                    <h5><?php print $widgets["filter-field_tipologia_tid"]->label; ?></h5>
                    <!--<h6><?php //print $widgets["filter-field_tipologia_tid"]->description; ?></h6>-->
                </div>
                <?php print $widgets["filter-field_tipologia_tid"]->widget;?>
            </div>
            <div class="views-widget col-md-4">
                <div class="description">
                    <h5><?php print $widgets["filter-field_abitudine_alimentare_tid"]->label; ?></h5>
                    <!--<h6><?php // print $widgets["filter-field_abitudine_alimentare_tid"]->description; ?></h6>-->
                </div>
                <?php print $widgets["filter-field_abitudine_alimentare_tid"]->widget;?>
            </div>
            <div class="views-widget col-md-4">
                <div class="description">
                    <h5>
                        <?php
                        print $widgets["filter-field_allergene_tid"]->label; ?></h5>
                    <!--<h6><?php // print $widgets["filter-field_allergene_tid"]->description; ?></h6>-->
                </div>
                <?php
                $values_allergene = $widgets["filter-field_allergene_tid"]->widget;
                $values_allergene = str_replace("Qualsiasi","Nessuna",$values_allergene);
                if ($GLOBALS['language']->language=='en') {
                    $values_allergene = str_replace("Senza Glutine", "Gluten Free", $values_allergene);
                    $values_allergene = str_replace("Senza Lattosio", "Lactose Free", $values_allergene);
                    $values_allergene = str_replace("Senza Proteine del latte vaccino", "Cow's milk protein free", $values_allergene);
                    $values_allergene = str_replace("Senza Uova", "Lactose Free", $values_allergene);
                    $values_allergene = str_replace("Senza Lattosio", "Eggs free", $values_allergene);
                    $values_allergene = str_replace("Senza Arachidi", "Peanuts Free", $values_allergene);
                    $values_allergene = str_replace("Senza Frutta a guscio", "Nuts Free", $values_allergene);
                    $values_allergene = str_replace("Senza Soia", "Soy Free", $values_allergene);
                    $values_allergene = str_replace("Senza Semi di Sesamo", "Sesame seeds Free", $values_allergene);
                    $values_allergene = str_replace("Senza Pesce", "Fish Free", $values_allergene);
                    $values_allergene = str_replace("Senza Crostacei", "Crustacean Free", $values_allergene);
                    $values_allergene = str_replace("Senza Molluschi", "Molluscs Free", $values_allergene);
                    $values_allergene = str_replace("Senza Sedano", "Celery Free", $values_allergene);
                    $values_allergene = str_replace("Senza Senape", "Mustard Free", $values_allergene);
                    $values_allergene = str_replace("Senza An.Solforosa e Solfiti", "Sulphites and sulphur dioxide Free", $values_allergene);
                    $values_allergene = str_replace("Senza Lupini", "Lupin Free", $values_allergene);
                }
                $widgets["filter-field_allergene_tid"]->widget=$values_allergene;
                print $widgets["filter-field_allergene_tid"]->widget;?>
            </div>
            <div class="views-widget col-xs-12 hidden-md hidden-lg">
                <?php if (!empty($reset_button)): ?>
                    <div class=" views-reset-button">
                        <?php print $reset_button; ?>
                    </div>
                <?php endif; ?>
            </div>

        </div>
        <!-- <div class="row">
              <div class="views-widget col-md-6">
                  <div class="description">
                     <h5><?php // print $widgets["filter-field_categoria_tid"]->label; ?></h5>
                     <h6><?php // print $widgets["filter-field_categoria_tid"]->description; ?></h6>
                  </div>
                  <?php //print $widgets["filter-field_categoria_tid"]->widget;?>
              </div>
          </div>-->
        <div class="row">

        </div>
        <!--</div>
              <div class="views-widget col-md-4">
                  <div class="description">
                      <h5><?php //print $widgets["filter-field_territorio_tid"]->label; ?></h5>
                  </div>
                   <?php //print $widgets["filter-field_territorio_tid"]->widget;?>
              </div>-->
    </div>
</div>

<?php if (!empty($sort_by)): ?>
    <div class="views-exposed-widget views-widget-sort-by">
        <?php print $sort_by; ?>
    </div>
    <div class="views-exposed-widget views-widget-sort-order">
        <?php print $sort_order; ?>
    </div>
<?php endif; ?>
<?php if (!empty($items_per_page)): ?>
    <div class="views-exposed-widget views-widget-per-page">
        <?php print $items_per_page; ?>
    </div>
<?php endif; ?>
<?php if (!empty($offset)): ?>
    <div class="views-exposed-widget views-widget-offset">
        <?php print $offset; ?>
    </div>
<?php endif; ?>
<div class="views-exposed-widget views-submit-button">
    <?php print $button; ?>
</div>

</div>
