<?php

function agroalimentare_preprocess_page(&$variables) {
    drupal_add_js(path_to_theme() . '/js/jquery.chosenpatch.js');


    /**
     * Insert variables into the page template.
     */
    if (isset($variables['node']) && $variables['node']->type != 'page' ) {
        if($variables['page']['sidebar_first'] && $variables['page']['sidebar_second']) {
            $variables['main_grid_class'] = 'col-md-6';
            $variables['sidebar_grid_class'] = 'col-md-3';
        } elseif ($variables['page']['sidebar_first'] && !$variables['page']['sidebar_second']) {
            $variables['main_grid_class'] = 'col-md-8';
            $variables['sidebar_grid_class'] = 'col-md-4 fix-sidebar-first';
        } elseif (!$variables['page']['sidebar_first'] && $variables['page']['sidebar_second']) {
            $variables['main_grid_class'] = 'col-md-8';
            $variables['sidebar_grid_class'] = 'col-md-4 fix-sidebar-second';
        } else {
            $variables['main_grid_class'] = 'col-md-12';
            $variables['sidebar_grid_class'] = '';
        }

    } else {
        if($variables['page']['sidebar_first'] && $variables['page']['sidebar_second']) {
            $variables['main_grid_class'] = 'col-md-6';
            $variables['sidebar_grid_class'] = 'col-md-3';
        } elseif ($variables['page']['sidebar_first'] && !$variables['page']['sidebar_second']) {
            $variables['main_grid_class'] = 'col-md-8';
            $variables['sidebar_grid_class'] = 'col-md-4 fix-sidebar-first';
        } elseif (!$variables['page']['sidebar_first'] && $variables['page']['sidebar_second']) {
            $variables['main_grid_class'] = 'col-md-8';
            $variables['sidebar_grid_class'] = 'col-md-4 fix-sidebar-second';
        } else {
            $variables['main_grid_class'] = 'col-md-12';
            $variables['sidebar_grid_class'] = '';
        }
    }


    if($variables['page']['highlighted_bottom_right'] && $variables['page']['highlighted_bottom_left']) {
        $variables['highlighted_bottom_left_grid_class'] = 'col-md-8';
        $variables['highlighted_bottom_right_grid_class'] = 'col-md-4';
    } elseif ($variables['page']['highlighted_bottom_right'] || $variables['page']['highlighted_bottom_left']) {
        $variables['highlighted_bottom_right_grid_class'] = 'col-md-12';
        $variables['highlighted_bottom_left_grid_class'] = 'col-md-12';
    }

        $current_path = drupal_get_path_alias();
        $is_tax = strpos($current_path,'taxonomy');
        $is_abitudine = strpos($current_path,'abitudine-alimentare');
        $is_marchio = strpos($current_path,'marchio');

        $new_title = drupal_get_title();

        if(($is_tax !== false))
            $new_title = "Tutti i prodotti della categoria: ".drupal_get_title()."";
        elseif ($is_abitudine !== false)
                $new_title = "Tutti i prodotti per: ".drupal_get_title()."";
            elseif ($is_marchio !== false)
                    $new_title = "tutti i prodotti con marchio: ".drupal_get_title()."";

        drupal_set_title($new_title);

}



?>